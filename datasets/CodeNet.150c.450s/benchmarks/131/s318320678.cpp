#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<vector>
#include<cstdio>
using namespace std;

int main() {
	int a, l;
	while (cin >> a >> l, l) {
		bool flag=false;
		int ans = 0;
		vector<int>v = { a };
		while (!flag) {
			ostringstream ostr;
			ostr << setfill('0') << setw(l) << a;
			string s = ostr.str();
			sort(s.begin(), s.end());
			string s1 = s;
			reverse(s1.begin(), s1.end());
			a = stoi(s1) - stoi(s);
			for (int i = 0; i < (int)v.size(); i++) {
				if (v[i] == a) {
					flag = true;
					ans = i;
					break;
				}
			}
			v.push_back(a);
		}
		printf("%d %d %d\n", ans, v[ans], (int)v.size() - ans - 1);
	}
}