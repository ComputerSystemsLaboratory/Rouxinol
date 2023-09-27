#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define REP(i,N) for(int i = 0; i < (int)N; i++)


int main(){
	int a;
	while(cin >> a){
		int ret = 0;
		REP(i,10)REP(j,10)REP(k,10)REP(l,10){
			if(i+j+k+l == a){
				ret++;
			}
		}
		cout << ret << endl;
	}
	return 0;
}