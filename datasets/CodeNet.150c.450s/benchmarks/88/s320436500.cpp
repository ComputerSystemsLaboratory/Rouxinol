#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include <stdio.h>
#include <functional>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

string x(string s, const string cs, const string se) {
	int pos = 0;
	while ((pos = s.find_first_of(se)) != string::npos) {
		s.replace(pos, 1, cs);
	}
	return s;
}

string y(string a) {
	int pos4 = 0, pos9 = 0;
	a = x(a, "3", "5");
	a = x(a, "5", "6");
	a = x(a, "6", "7");
	a = x(a, "7", "8");
	int pos = a.length();
	if ((pos4 = a.find_first_of("4")) != string::npos && (pos9 = a.find_first_of("9")) != string::npos)
	{
		if (pos4 > pos9) {//4>9
			a = a.replace(pos9, 1, "7");
			pos = pos9 + 1;
		}
		else {
			a = a.replace(pos4, 1, "3");
			pos = pos4 + 1;
		}
	}
	else if ((pos4 = a.find_first_of("4")) != string::npos) {
		a = a.replace(pos4, 1, "3");
		pos = pos4 + 1;
	}
	else if ((pos9 = a.find_first_of("9")) != string::npos) {
		a = a.replace(pos9, 1, "7");
		pos = pos9 + 1;
	}
	while (pos != a.length()) {
		a = a.replace(pos, 1, "7");
		pos++;
	}
	return a;
}

int n;
int m;
int aji[100000];

int saiki(){
	return 0;
}

int main(){
	vector<pair<int, int>> taikaku[50000];
	for (int i = 1; i <= 150; i++) { // i < j
		for (int j = i + 1; j <= 150; j++) {
			int num = i * i + j * j;
			taikaku[num].push_back(make_pair(i, j));
		}
	}
	/*for (int i = 0; i < 50000; i++) { // i < j
		sort(taikaku[i].begin(), taikaku[i].end());
	}*/
	int h, w;
	while (cin >> h >> w && !(h == 0 && w == 0)) {
		bool flag = false;
		bool flag2 = true;
		int num = h * h + w * w;
		while (flag2){
			for (int i = 0; i < taikaku[num].size(); i++) {
				if (h < taikaku[num][i].first || flag) {
					cout << taikaku[num][i].first << " " << taikaku[num][i].second << endl;
					flag2 = false;
					break;
				}
			}
			num++;
			flag = true;
		}
	}
	return 0;
}