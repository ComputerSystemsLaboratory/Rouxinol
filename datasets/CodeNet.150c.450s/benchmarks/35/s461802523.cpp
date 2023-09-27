#include <stdio.h>
#include <iostream>
#include <queue>
#include <map>
#include <string>
#include <vector>
#define PB push_back
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
using	namespace std;
int n,tmp;
void solve(){
	while(cin >> n  && n!= 0){
		vector <int> data ;
		REP(i,n){
			cin >> tmp;
			data.PB(tmp);
		}
		int sofar = 0 ,end = 0;
		REP(i,n){
			end = max(end+data[i],0);
			sofar = max(end,sofar);
		}
		if(sofar == 0){
			sofar = -10000000;
			REP(i,n)sofar = max(sofar,data[i]);
		}
		cout << sofar <<endl;


	}

}

int main(){
	solve();

}