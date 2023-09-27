#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

#define FOR(i,a,b) for (ll i = (a); i < (b); i++)
#define REP(i,n) FOR(i,0,n)

typedef long long ll;

int s[10234];

int main(){
	int n, q;
	
	cin >> n >> q;
	
	REP(i,n){
		s[i] = i;
	}
	
	REP(i,q){
		int com, x, y;
		
		cin >> com >> x >> y;
		
		if (com == 0){
			int tmp1, tmp2;
			
			if (x < y){
				tmp1 = s[y];
				tmp2 = s[x];
			}
			else if (y < x) {
				tmp1 = s[x];
				tmp2 = s[y];
			}
			
			REP(i,n){
				if (s[i] == tmp1){
					s[i] = tmp2;
				}
			}
		}
		else {
			if (s[x] == s[y]) cout << 1 << endl;
			else cout << 0 << endl;
		}
	}
	
	return 0;
}