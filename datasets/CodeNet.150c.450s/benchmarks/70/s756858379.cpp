#include<iostream>
#include<string>
#include<vector>
//#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, t;
	vector<int> X, Y, T;
	while (cin >> x >> y) {
		if (x == 0)break;
		X.push_back(x);
		Y.push_back(y);
	}
	for (int i = 0; i < X.size(); i++) {
		if (X[i] == 1)t = (Y[i] - 1) % 7;
		else if (X[i] == 2)t = (30 + Y[i]) % 7;
		else if (X[i] % 2 == 0) {
			if (X[i] >= 8)t = (((X[i] - 8) / 2) * 61 + Y[i] + 212) % 7;
			else t = (((X[i] - 4) / 2) * 61 + 90 + Y[i]) % 7;
		}
		else {
			if(X[i]>=8)t = (((X[i] - 9) / 2) * 61 + 243 + Y[i]) % 7;
			else t= (((X[i] - 3) / 2) * 61 + 59 + Y[i]) % 7;
		}
		T.push_back(t);
	}
	for (int i = 0; i < T.size(); i++) {
		if (T[i] == 0)cout << "Thursday" << endl;
		else if (T[i] == 1)cout << "Friday" << endl;
		else if (T[i] == 2)cout << "Saturday" << endl;
		else if (T[i] == 3)cout << "Sunday" << endl;
		else if (T[i] == 4)cout << "Monday" << endl;
		else if (T[i] == 5)cout << "Tuesday" << endl;
		else cout << "Wednesday" << endl;
	}
	return 0;
}