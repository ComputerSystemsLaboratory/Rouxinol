#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define MEM(a,n) memset(a,n,sizeof(a))
#define p(S) cout<<(S)<<endl
using namespace std;


int main(){
	int n,p;
	while(cin>>n>>p,n){
		int a[50],center=p;
		MEM(a,0);
		int ans;
		REP(i,0,n){
			if(center>0) {
				a[i]++;
				center--;
			}
			else{
				center+=a[i];
				a[i]=0;
			}
			if(center==0){
				bool flag=true;
				REP(j,0,n){
					if(i==j) continue;
					if(a[j]!=0){
						flag=false;
						break;
					}
				}
				if(flag) {
					ans=i;
					break;
				}
			}
			if(i==n-1) i=-1;
		}
		p(ans);
	}
	return 0;
}