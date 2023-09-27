#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

int a[201];
int dp1[1000001],dp2[1000001];
int main(){
    FOR(i,1,201){
        a[i-1]=i*(i+1)*(i+2)/6;
    }
    int n;
    while(cin>>n,n){
        rep(i,n+1) dp1[i]=dp2[i]=1000100010;
        dp1[n]=0,dp2[n]=0;
        rep(i,200)for(int j=n;j>=a[199-i];--j){
            dp1[j-a[199-i]]=min(dp1[j-a[199-i]],dp1[j]+1);
            if(a[199-i]%2==1) dp2[j-a[199-i]]=min(dp2[j-a[199-i]],dp2[j]+1);
        }
        cout<<dp1[0]<<" "<<dp2[0]<<endl;
    }
    return 0;
}
