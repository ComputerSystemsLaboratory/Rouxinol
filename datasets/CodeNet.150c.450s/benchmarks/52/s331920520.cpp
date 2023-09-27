#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cmath>
#include<vector>
#include<utility>
#include<stack>
#include<queue>

#define FOR(i, a, b) for(int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for(int i=(a);i>=(b);i--)
#define MOD 1000000007

using namespace std;

int main(void) {
	stack<int>p;
	stack<int>s;
	int n;
	
	while (cin >> n) {
		if (n == 0) {
			s.push(p.top());
			cout << s.top() << endl;
			p.pop();
		}
		else {
			p.push(n);
		}
	}
	
	return 0;
}