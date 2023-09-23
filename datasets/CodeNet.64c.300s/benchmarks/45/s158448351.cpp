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

    while(true)
    {
        int n,m,p,X[100]={0};
        cin>>n>>m>>p;
        if(n+m+p==0) break;
     
        int num=0;
        REP(i,n) cin>>X[i],num+=X[i];
        if(X[m-1]==0) cout<<0<<endl;
        else cout<<(100-p)*num/X[m-1]<<endl;
    }
}