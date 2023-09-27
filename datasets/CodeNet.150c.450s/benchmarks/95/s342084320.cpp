#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
	string a[100];
	int b;
	while (cin >> b, b) {
		for (int c = 0; c < b; c++)cin >> a[c];
		int s = 0;
		for (int d = 0; d < b - 1; d++) { if (a[d][1] == a[d + 1][1])s++; }
		cout << s << endl;
	}
}