#include<bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define ALL(v) (v).begin(),(v),end()
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

    int m,nmin,nmax;
    while(cin>>m>>nmin>>nmax,m|nmin|nmax){
        int p[205];
        REP(i,m) cin>>p[i+1];
        int ma=0,ans;
        for(int i=nmin;i<=nmax;i++){
            if(p[i]-p[i+1]>=ma){
                ma=p[i]-p[i+1];
                ans=i;
            }
        }
        cout<<ans<<endl;
    }

}