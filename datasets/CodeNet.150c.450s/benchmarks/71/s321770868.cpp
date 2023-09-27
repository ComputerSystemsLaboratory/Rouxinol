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
	int count = 0;

	while (cin >> n) {
		FOR(i, 0, 9) {
			FOR(t, 0, 9) {
				FOR(s, 0, 9) {
					FOR(u, 0, 9) {
						if (i + t + s + u == n) {
							count++;
						}
					}
				}
			}
		}
		cout << count << endl;
		count = 0;
	}
	
	return 0;
}