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
	int n,r;
	while(true){
		cin >> n >> r;
		if(!n&&!r) break;
		vector<int> fuda;
		REP(i,n) fuda.push_back(i+1);
		REP(i,r){
			int p, c;
			cin >> p >> c;
			for(int j=c-1;j>=0;j--){
				fuda.push_back(fuda[n-p-j]);
			}
			REP(i,c)fuda.erase(fuda.begin()+n-p-i);
		}
		cout << fuda[n] << endl;
	}
}