#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a=0, b=0,n,s,t;
	cin >> n; while (n != 0) {
		a = 0; b = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d%d", &s, &t);
			if (s > t)a += s + t;
			else if (t > s)b += s + t;
			else { a += s; b += t; }
		}
		cout << a << " " << b << endl; cin >> n;
	}
	return 0;
}