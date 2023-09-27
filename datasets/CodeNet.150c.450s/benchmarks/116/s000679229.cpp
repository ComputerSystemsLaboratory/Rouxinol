#include <bits/stdc++.h>
#define FOR(v, a, b) for(int v = (a); v < (b); ++v)
#define FORE(v, a, b) for(int v = (a); v <= (b); ++v)
#define REP(v, n) FOR(v, 0, n)
#define REPE(v, n) FORE(v, 0, n)
#define RS resize
#define CLR clear
#define PB push_back
#define ALL(x) (x).begin(), (x).end()
using namespace std;

int main(){
	int n, k;
	vector< int > a;
	vector< int > r;
	
	while(cin >> n >> k, n){
		a.CLR();
		r.CLR();
		
		a.RS(n);
		r.RS(n - k + 1);
		
		REP(i, n) cin >> a[i];
		
		REP(i, k) r[0] +=  a[i];
		
		FOR(i, k, n){
			r[i-k+1] = r[i-k] + a[i] - a[i-k];
		}
		cout << *max_element(ALL(r)) << endl;
	}
	
	return 0;
}