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
string e[100000];
int main() {
	int n;
	cin >> n;
	for (int z = 0; z < n; z++) {
		string a,c,d,h;
		cin >> a;
		int sum = 0;
		for (int i = 1; i < a.length() ; i++) {
			c = a.substr(0, i);
			d = a.substr(i, a.length() - i);
			h = c + d;
			string f = "", g = "";
			for (int j = c.length() - 1; j >= 0; j--) 
				f += c[j];
			for (int j = d.length() - 1; j >= 0; j--)
				g += d[j];
			for (int j = 0; j < 8; j++) {
				if (j == 0) h = c + d;
				else if (j == 1) h = d + c;
				else if (j == 2) h = c + g;
				else if (j == 3) h = g + c;
				else if (j == 4) h = f + d;
				else if (j == 5) h = d + f;
				else if (j == 6) h = f + g;
				else if (j == 7) h = g + f;
				for (int z = 0; z < sum; z++) {
					if (e[z] == h) {
						goto stop;
					}
				}
				e[sum] = h;
				sum++;
			stop:;
			}
		}
		cout << sum << endl;
	}
}