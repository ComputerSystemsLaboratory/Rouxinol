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
	int total = 0;
	int n;
	int t;
	
	while (cin >> n) {
		total = 0;
		t = 600 - n;
		while (t>0) {
			total += t*t*n;
			t -= n;
		}
		cout << total << endl;
	}
	
	return 0;
}