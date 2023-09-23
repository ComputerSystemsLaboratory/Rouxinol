#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v).end()
#define pb push_back
typedef long long ll;
typedef pair<int,int> P;

template<typename A,typename B> inline void chmin(A &a,B b){if(a>b) a=b;}
template<typename A,typename B> inline void chmax(A &a,B b){if(a<b) a=b;}
//-----------------------------------------------------------------------

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int e;
    while(cin>>e,e)
    {
        int ans=1e9;
        for(int z=0;e-z*z*z>=0;z++){
            for(int y=0;e-z*z*z-y*y>=0;y++){
                int x=e-z*z*z-y*y;
                chmin(ans,x+y+z);
            }
        }
        cout<<ans<<endl;
    }
}