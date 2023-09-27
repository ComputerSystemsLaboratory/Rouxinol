#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int main(){
	while(1){
		int m,na,nb;
		cin>>m>>na>>nb;
		if(!m)break;
		int p[m];
		rep(i,m)cin>>p[i];
		int s=0;
		int ans;
		REP(i,na,nb){
			if(s<=p[i-1]-p[i]){
				s=p[i-1]-p[i];
				ans=i;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
