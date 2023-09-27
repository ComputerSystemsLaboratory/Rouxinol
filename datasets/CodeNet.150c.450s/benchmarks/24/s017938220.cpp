#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
using namespace std;


int main(){
	int N,M;
	while(cin>>N>>M&&N){
		int P[11]={0};
		int d,p;
                long long int ans=0;
		REP(i,0,N){
			cin>>d>>p;
			P[p]+=d;
		}
		for(int i=10;i>=0;i--){
			if(P[i]>=M){
				P[i]-=M;
				break;
			}else{
				M-=P[i];
				P[i]=0;
			}
		}
		REP(i,1,11){
			ans+=i*P[i];
		}
		p(ans);
	}

	return 0;
}