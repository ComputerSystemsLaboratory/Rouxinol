#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define int ll

#define FOR(i,a,b) for(int i=int(a);i<int(b);i++)
#define REP(i,b) FOR(i,0,b)

int read(){
	int i;
	scanf("%lld",&i);
	return i;
}

signed main(){
	int n;
	while(n=read()){
		int score[n];
		int mean=0;
		REP(i,n){
			score[i] = read();
		}
		
		sort(score,score+n);

		
		FOR(i,1,n-1){
			mean += score[i];
		}
		mean /= (n-2);
		cout << mean << endl;
	}
}