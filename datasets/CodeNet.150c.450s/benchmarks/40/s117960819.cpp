#include <bits/stdc++.h>
using namespace std;

struct die {
	int val[6];
	void N() {
		int tmp[6];
		for (int i = 0; i < 6; i++) {
			tmp[i] = val[i];
		}
		val[0] = tmp[1];
		val[4] = tmp[0];
		val[5] = tmp[4];
		val[1] = tmp[5];
	}
	void E() {
		int tmp[6];
		for (int i = 0; i < 6; i++) {
			tmp[i] = val[i];
		}
		val[2] = tmp[0];
		val[5] = tmp[2];
		val[3] = tmp[5];
		val[0] = tmp[3];
	}
	void W() {
		int tmp[6];
		for (int i = 0; i < 6; i++) {
			tmp[i] = val[i];
		}
		val[3] = tmp[0];
		val[5] = tmp[3];
		val[2] = tmp[5];
		val[0] = tmp[2];
	}
	void S() {
		int tmp[6];
		for (int i = 0; i < 6; i++) {
			tmp[i] = val[i];
		}
		val[0] = tmp[4];
		val[1] = tmp[0];
		val[5] = tmp[1];
		val[4] = tmp[5];
	}
};

int main()
{
	string com;
	die d;
	for (int i = 0; i < 6; i++) {
		cin >> d.val[i];
	}
	cin >> com;
	for (char c : com) {
		switch (c)
		{
		case 'N':
			d.N();
			break;
		case 'E':
			d.E();
			break;
		case 'W':
			d.W();
			break;
		case 'S':
			d.S();
			break;
		}
	}
	cout << d.val[0] << endl;
	return 0;
}