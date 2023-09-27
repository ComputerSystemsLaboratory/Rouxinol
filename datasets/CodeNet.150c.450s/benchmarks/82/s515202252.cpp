#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <math.h>

using namespace std;

typedef long long ll;

string beautify(string str) {
	string ret = "";
	for (int i = 0; i < str.size(); ++i) {
		char c = str[i];
		if ('a' <= c && c <= 'z') ret += c;
		else if ('A' <= c && c <= 'Z') ret += (char)(c-'A'+'a');
	}
	return ret;
}

class Dice {
private:
	int v[6];

public:
	int GetTop() {
		return v[0];
	}
	int GetFront() {
		return v[1];
	}
	int GetRight() {
		return v[2];
	}
	void Rotate(char op) {
		int newV[6];
		switch (op) {
		case 'N':
			newV[0] = v[1];
			newV[1] = v[5];
			newV[2] = v[2];
			newV[3] = v[3];
			newV[4] = v[0];
			newV[5] = v[4];
			break;

		case 'S':
			newV[0] = v[4];
			newV[1] = v[0];
			newV[2] = v[2];
			newV[3] = v[3];
			newV[4] = v[5];
			newV[5] = v[1];
			break;

		case 'E':
			newV[0] = v[3];
			newV[1] = v[1];
			newV[2] = v[0];
			newV[3] = v[5];
			newV[4] = v[4];
			newV[5] = v[2];
			break;

		case 'W':
			newV[0] = v[2];
			newV[1] = v[1];
			newV[2] = v[5];
			newV[3] = v[0];
			newV[4] = v[4];
			newV[5] = v[3];
			break;
		}
		for (int i = 0; i < 6; ++i) v[i] = newV[i];
	}
	void Spin(char op) {
		switch (op) {
		case 'R':
			Rotate('N');
			Rotate('E');
			Rotate('S');
			break;

		case 'L':
			Rotate('N');
			Rotate('W');
			Rotate('S');
			break;
		}
	}
	Dice(int v1, int v2, int v3, int v4, int v5, int v6) {
		v[0] = v1;
		v[1] = v2;
		v[2] = v3;
		v[3] = v4;
		v[4] = v5;
		v[5] = v6;
	}
};

int main() {
	int v[6];
	for (int i = 0; i < 6; ++i) cin >> v[i];
	Dice dice(v[0], v[1], v[2], v[3], v[4], v[5]);

	int n; cin >> n;
	for (int q = 0; q < n; ++q) {
		int t, f; cin >> t >> f;
		int v = -1;
		for (int k = 0; k < 4; ++k) {
			for (int i = 0; i < 4; ++i) {
				for (int j = 0; j < 4; ++j) {
					if (dice.GetTop() == t && dice.GetFront() == f) {
						v = dice.GetRight();
						break;
					}
					dice.Rotate('N');
				}
				if (v != -1) break;
				dice.Spin('R');
			}
			if (v != -1) break;
			dice.Rotate('E');
		}
		cout << v << endl;
	}
}