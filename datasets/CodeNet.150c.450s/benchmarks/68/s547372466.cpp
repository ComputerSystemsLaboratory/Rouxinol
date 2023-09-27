#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<(S)<<endl
#define ck(a,b) (0<=(a)&&(a)<(b))

using namespace std;

int main(){
	int n;
	while(cin>>n,n){
		int A[1001];
		int ans=1000100;
		REP(i,0,n) cin>>A[i];
		sort(A,A+n);
		REP(i,1,n)	ans=min(ans,abs(A[i]-A[i-1]));
		p(ans);
	}
	return 0;
}