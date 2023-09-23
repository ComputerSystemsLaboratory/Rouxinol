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

    int n; cin>>n;
    int s=196471;
    REP(i,n){
        int y,m,d;
        cin>>y>>m>>d;

        d+=200*((y-1)/3)+195*((y-1)-(y-1)/3);
        if(y%3==0) d+=20*(m-1);
        else d+=19*((m-1)/2)+20*((m-1)-(m-1)/2);
        cout<<s-d<<endl;
    }
}