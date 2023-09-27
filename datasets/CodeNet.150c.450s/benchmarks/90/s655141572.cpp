#include <bits/stdc++.h>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

using namespace std;

int c[101];

int main(){
	ios::sync_with_stdio(false);
	int n;
	while (cin>>n){
		c[n]++;
	}
	int ma=0;
	REP(i,101){
		ma=max(ma,c[i]);
	}
	REP(i,101){
		if (c[i]==ma){
			cout<<i<<endl;
		}
	}
	return 0;
}