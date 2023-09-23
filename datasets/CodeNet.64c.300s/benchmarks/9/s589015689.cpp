#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
typedef long long LL;
int main(){
	LL n;
	cin>>n;
	LL ans=100000;
	REP(i,n){
	    ans*=1.05;
	    if(ans%1000!=0){
	       ans/=1000;
	       ans++;
	       ans*=1000;
	    }
	}
        cout<<ans<<endl;
	return(0);
}