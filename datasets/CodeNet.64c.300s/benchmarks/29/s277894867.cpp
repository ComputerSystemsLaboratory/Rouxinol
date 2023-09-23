#include <bits/stdc++.h>
#define rep(i,j,k) for(int i=(int)j;i<(int)k;i++)
#define itrep(x) for(auto it=(x).begin();it!=(x).end();it++) 
#define Sort(x) sort((x).begin(),(x).end())
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define vi vector<int>
#define INF (int)1e9
#define INFL 1e18
#define MOD 1000000007
#define pb push_back
#define MP make_pair
typedef long long int ll;
typedef std::pair<int,int> P;
int D=1;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
 
using namespace std;
 
int main(){
    while(1){
        int e;
        int ans=1e9+7;
        cin>>e;
        if(e==0)break;
         
        rep(y,0,1000){
            rep(z,0,1000){
                int x=e-y*y-z*z*z;
                if(x<0)continue;
                ans=min(ans,x+y+z);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
