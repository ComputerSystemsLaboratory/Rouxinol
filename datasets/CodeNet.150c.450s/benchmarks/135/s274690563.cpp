#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
using namespace std;


int main(){
	int N,M;
	while(cin>>N>>M&&N){
		int h[1501],w[1501];
		set<int> s,tmps;
		map<int,int> allh,allw;
		int ans=0,k;
		REP(i,0,N){
			cin>>h[i];
			k=0;
			for(int j=i;j>=0;j--){
				k+=h[j];
				allh[k]++;
				tmps.insert(k);
			}
		}
		REP(i,0,M){
			cin>>w[i];
			k=0;
			for(int j=i;j>=0;j--){
				k+=w[j];
				if(tmps.find(k)!=tmps.end()){
					allw[k]++;
					s.insert(k);
				}
			}
		}
		for(auto itr=s.begin();itr!=s.end();itr++){
			ans+=allh[*itr]*allw[*itr];
		}
		p(ans);
	}

	return 0;
}