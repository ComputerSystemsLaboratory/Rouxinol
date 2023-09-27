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
        int x,y,s;
        cin>>x>>y>>s;
        if(x+y+s==0) break;

        int ans=0;
        for(int i=1;i<=s/2;i++)
        {   
            int a=(100*i+99)/(100+x);
            int b=(100*(s-i)+99)/(100+x);
            if(a*(100+x)/100+b*(100+x)/100!=s) continue;
            chmax(ans,a*(100+y)/100+b*(100+y)/100);
        }
        cout<<ans<<endl;
    }   
}