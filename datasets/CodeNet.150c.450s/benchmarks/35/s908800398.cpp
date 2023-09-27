#include <bits/stdc++.h>

using namespace std;

const int MAX_N=1e6,MAX_A=1e5;

typedef long long ll;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a) FOR(i,0,a)

int N;
int a[MAX_N];

ll sum[MAX_N+1];

int main(){
	do{
		scanf("%d",&N);
		if (N){
			REP(i,N){
				scanf("%d",&a[i]);
			}
			ll ma=-MAX_A;
			sum[0]=0;
			REP(i,N){
				sum[i+1]=sum[i]+a[i];
			}
			REP(i,N){
				FOR(j,i,N){
					ma=max(ma,sum[j+1]-sum[i]);
				}
			}
			printf("%lld\n",ma);
		}
	}while(N);
	return 0;
}