#if 0
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2015

#endif

#include <iostream>
#include <cstring>
using namespace std;

const int diagcnt = 1500*1000*2 + 10;
int diaggrp[diagcnt];

#define REP(var, start, count) for(int var=start; var<count; var++)

int main(void) {
	
	while(true) {
		int n, m;
		cin >> n >> m;
		if ( n == 0 ) { break; }
		
		int h[1510];
		int w[1510];
		
		memset(diaggrp, 0, sizeof(int)*diagcnt);
		
		int y = 0;
		h[0] = 0;
		REP(i, 0, n) {
			int hhh;
			cin >> hhh;
			y += hhh;
			h[i+1] = y;
		}
		
		int x = 0;
		w[0] = 0;
		REP(i, 0, m) {
			int www;
			cin >> www;
			x += www;
			w[i+1] = x;
		}
		
		REP(j1, 0, n+1) {
			REP(j2, 0, m+1) {
				int diff = h[j1] - w[j2];
				diaggrp[diff + 1500*1000 + 5] += 1;
			}
		}
		
		int sum = 0;
		REP(i, 0, diagcnt) {
			if ( diaggrp[i] >= 2 ) {
				sum += (diaggrp[i] * (diaggrp[i]-1) / 2);
			}
		}
		
		cout << sum << endl;
	}
}