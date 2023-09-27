#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (int64_t i = (a); i < (b); i++)
#define REP(i,n) rep(i,0,n)

int n,a[11][5];

void solve()
{
    while(cin>>n,n){
        REP(i,n)REP(j,5)cin>>a[i][j];
        int ans=0;bool flag=1;
        while(flag){
            flag=0;
            REP(i,n){
                int now=a[i][0],cnt=1,idx=0;
                rep(j,1,5){
                    if(a[i][j]==a[i][j-1])cnt++;
                    else if(cnt<3)now=a[i][j],cnt=1,idx=j;
                    else break;
                }
                if(cnt>=3&&a[i][idx]!=0){
                    ans+=cnt*a[i][idx];
                    flag=1;
                    rep(j,idx,idx+cnt)a[i][j]=0;
                }
            }
            REP(i,5)REP(j,n)if(a[j][i]==0){
                for(int k=j;k>0;k--)swap(a[k][i],a[k-1][i]);
            } 
        }
        cout<<ans<<endl;
    }
}

int main() 
{
    cin.tie(0);
	ios::sync_with_stdio(false);
    solve();
    return 0;
}
