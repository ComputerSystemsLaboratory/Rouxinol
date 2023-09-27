#include<iostream>

using namespace std;


int main() {
	while (true) {
		char InputStr[201];
		char OutputStr[201];
		int h[101];
		int m;
		int Shuffle = 0;
		int StrNum = 0;

		cin >> InputStr;
		if (InputStr[0] == '-')break;
		while (InputStr[StrNum] != '\0')StrNum++;

		cin >> m;
		
		for (int i = 0; i < m; i++) {
			cin >> h[i];
			Shuffle += h[i];
		}
		Shuffle %= StrNum;

		for (int i = 0; i < StrNum; i++) {
			OutputStr[i] = InputStr[(Shuffle + i) % StrNum];
		}
		OutputStr[StrNum] = '\0';

		cout << OutputStr << endl;
	}
	return 0;
}