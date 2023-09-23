#include <iostream>
#include <climits>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#define MAX 1000000007

using namespace std;
#define ll long long
#define dbg if(0)

int main(){
    ll n;
    do{
        cin >>n;
        if (n==0)break;
        int mtown=0;
        ll g[10][10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                g[i][j]=INT_MAX;
            }
                g[i][i]=0;
        }
        for(int i=0;i<n;i++){
            int a,b,c;
            cin>>a>>b>>c;
            mtown=max(a,max(mtown,b));
            g[a][b]=c;
            g[b][a]=c;
        }
        for(int k=0;k<10;k++){
            for(int i=0;i<10;i++){
                for(int j=0;j<10;j++){
                    g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
                }
            }
        }
        dbg{
            for(int i=0;i<10;i++){
                for(int j=0;j<10;j++){
                    cout <<g[i][j]<<" ";
                }
                cout <<endl;
            }
        }
        ll ans=INT_MAX;
        ll ansid=11;
        for(int i=0;i<=mtown;i++){
            ll cand=0;
            for(int j=0;j<=mtown;j++){
                if (g[i][j]==INT_MAX)break;
                cand+=g[i][j];
            }
            if(ans>=cand){
                if (cand==ans){
                    ansid=min((ll)i,ansid);
                }else{
                    ans=cand;
                    ansid=i;
                }
            }
        }
        cout <<ansid<<" "<<ans<<endl;
    }while(1);

    return 0;
}


