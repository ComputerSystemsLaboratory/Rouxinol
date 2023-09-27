#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<map>
#include<set>
#include<list>
#include<iomanip>
#include<vector>
#include<functional>
#include<algorithm>
#include<cstdio>
using namespace std;
int main() {
	long long a, l;
	while (cin >> a >> l&&a != 0 || l != 0) {
		long long b[100];
		b[0] = a;
		int i = 1;
		while (true) {
			long long c, d;
			vector<int>e;
			string f = to_string(a);
			for (int j = 0; j < f.size(); j++) 
				e.push_back((int)f[j] - '0');
			for (int j = e.size(); j < l; j++) 
				e.push_back(0);
			sort(e.begin(), e.end());
			f = "";
			for (int j = 0; j < e.size(); j++)
				f += (char)e[j] + '0';
			c = stoll(f);
			reverse(e.begin(), e.end());
			f = "";
			for (int j = 0; j < e.size(); j++)
				f += (char)e[j] + '0';
			d = stoll(f);
			b[i] = d - c;
			a = d - c;
			for (int j = 0; j < i; j++) {
				if (b[j] == b[i]) {
					cout << j << " " << b[j] << " " << i - j << endl;
					goto stop;
				}
			}
			i++;
		}
	stop:;
	}
}