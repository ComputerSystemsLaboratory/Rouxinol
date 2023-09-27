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
	int n;
	int money = 100000;

	cin >> n;

	FOR(i, 1, n) {
		money *= 1.05;
		if (money % 1000 != 0) {
			money = money - (money % 1000);
			money += 1000;
		}
	}
	cout << money << endl;
	return 0;
}