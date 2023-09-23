#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
using namespace std;


int main(){
	int N;
	while(cin>>N,N){
		int ans=0,sum;
		REP(i,1,500){
			sum=i;
			REP(j,i+1,501){
				sum+=j;
				if(sum==N){
					ans++;
					break;
				}
				if(sum>N) break;
			}
		}
		p(ans);
	}
	return 0;
}