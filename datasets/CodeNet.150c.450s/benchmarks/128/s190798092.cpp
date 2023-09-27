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
	string s;
	cin >> s;

	RFOR(i, s.size() - 1, 0) {
		cout << s[i];
	}
	cout << endl;
	return 0;
}