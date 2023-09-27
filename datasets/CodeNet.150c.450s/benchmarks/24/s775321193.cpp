#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define reps(i, f, n)	for (int i = f; i < (int)(n); ++i)
#define rep(i, n)		reps (i, 0, n)

int main()
{
	int n, m;
	while(scanf("%d%d", &n, &m), n){
		int p[11] = {0};
		rep(i, n){
			int d, ps;
			scanf("%d%d", &d, &ps);
			p[ps] += d;
		}
		
		for(int i=10; i; --i){
			if(p[i] > m){
				p[i] -= m;
				m = 0;
			}
			else{
				m -= p[i];
				p[i] = 0;
			}
			if(m==0) break;
		}
		
		int ans = 0;
		rep(i, 11)
			ans += p[i] * i;
		
		printf("%d\n", ans);
			
	}
	return 0;
}