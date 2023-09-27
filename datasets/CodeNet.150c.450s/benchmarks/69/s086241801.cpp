#include <iostream>
#include <cmath>
#include <stack>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int a[15];

int main()
{
	int n;
	cin >> n;
	while (n--) {
		for (int i = 0; i < 10; i++)	cin >> a[i];
		stack<int> s1, s2;
		s1.push(a[0]);
		
		bool flag = true;
		
		for (int i = 1; i < 10; i++) {
			if (s2.empty()) {
				if (s1.top() < a[i])	s1.push(a[i]);
				else	s2.push(a[i]);
			}
			else {
				if (s1.top() > a[i]) {
					if (s2.top() > a[i])	{
					   flag = false; break;
					}
					else	s2.push(a[i]);
				}
				else {
					if (s2.top() > a[i])	s1.push(a[i]);
					else {
						if (s1.top() > s2.top())	s1.push(a[i]);
						else	s2.push(a[i]);
					}
				}
			}
		}
		if (flag)	cout << "YES\n";
		else	cout << "NO\n";
	}
	return 0;
}