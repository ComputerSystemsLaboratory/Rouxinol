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
        int n,a,b,c,x,Y[100];
        cin>>n>>a>>b>>c>>x;
        if(n==0) break;
        REP(i,n) cin>>Y[i];

        int cur=0;
        for(int i=0;i<=10000;i++){
            if(x==Y[cur]) cur++;
            if(cur==n){
                cout<<i<<endl;
                goto g;
            }
            x=(a*x+b)%c;
        }
        cout<<-1<<endl;
    g:;
    }
}