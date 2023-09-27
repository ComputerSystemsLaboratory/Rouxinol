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
	int n;
	int coin[6] = {500, 100, 50, 10, 5, 1};
	
	while(cin >> n, n){
		int m = 1000 - n;
		int num = 0;
		
		REP(i, 6){
			num += m / coin[i];
			m %= coin[i];
		}
		
		cout << num << endl;
	}
	
	return 0;
}