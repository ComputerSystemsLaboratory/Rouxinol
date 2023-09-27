#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main() 
{
	int n = -100000;
	int a, b;
	while (cin >> a >> b, a || b) {
		vector<int>s(a);
		for (int c = 0; c < a; c++)cin >> s[c];
		int m = 0;
		for (int e = 0; e < b; e++) {
			m += s[e];
		}
		if (n < m)n = m;
		for (int d = 0; d < a - b; d++) {
			m -= s[d];
			m += s[d + b];
			if (n < m)n = m;
		}
		cout << n << endl;
	}
}