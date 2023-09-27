#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
#include<functional>
#include<algorithm>
#include<cstdio>
using namespace std;
int main() {
	string a;
	string d[10] = { "",".,!? ","abc","def","ghi","jkl","mno",
		"pqrs","tuv","wxyz" };
	int m;
	cin >> m;
	for (int z = 0; z < m; z++) {
		cin >> a;
		string c = "";
		for (int i = 0; i < a.length();) {
			while (a[i] == '0'&&i < a.length())i++;
			if (i == a.length()) break;
			int j = i;
			while (a[j] == a[i] && i < a.length()) {
				i++;
			}
			int sum = i - j - 1;
			sum %= d[(int)a[j] - '0'].length();
			if (i < a.length() && a[i] == '0')c += d[(int)a[j] - '0'][sum];
		}
		if (c != "") cout << c << endl;
	}
}