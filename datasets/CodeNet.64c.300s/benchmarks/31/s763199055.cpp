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
	int a[30] = {}, b;
	
	REP(i, 28){
		cin >> b;
		a[b - 1] = 1;
	}
	
	REP(i, 30){
		if(!a[i]){
			cout << i + 1 << endl;
		}
	}
	
	return 0;
}