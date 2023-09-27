#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;

class dice {
public:
	int face[7];
	int get;

	dice(int x[]) {
		for (int i = 1; i <= 6; i++)
			face[i] = x[i];
	}

	void round(string x) {
		for (int i = 0; i < x.size(); i++) {
			switch (x[i]) {
			case 'E':
				get = face[1];
				face[1] = face[4];
				face[4] = face[6];
				face[6] = face[3];
				face[3] = get;
				break;
			case 'W':
				get = face[1];
				face[1] = face[3];
				face[3] = face[6];
				face[6] = face[4];
				face[4] = get;
				break;
			case 'N':
				get = face[1];
				face[1] = face[2];
				face[2] = face[6];
				face[6] = face[5];
				face[5] = get;
				break;
			case 'S':
				get = face[1];
				face[1] = face[5];
				face[5] = face[6];
				face[6] = face[2];
				face[2] = get;
				break;
			}
		}
	}
};

int main() {
	int facef[7];
	string operate;

	for (int i = 1; i <= 6; i++) {
		cin >> facef[i];
	}

	dice dice1(facef);

	cin >> operate;

	dice1.round(operate);

	cout << dice1.face[1] << endl;

	return 0;
}