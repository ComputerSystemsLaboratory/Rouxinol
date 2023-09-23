#include <iostream>
#include <algorithm>
using namespace std;

#define REP(i,p,n) for(int i=p;i<n;++i)
#define rep(i,n) REP(i,0,n)

const int MAXR=12;
const int MAXC=10001;
bool S[MAXR][MAXC];

int main()
{
        int r,c;
        while(cin>>r>>c&&(r|c))
        {
                rep(y,r) rep(x,c) cin>>S[y][x];

                int ans=0,res,v;
                rep(i,(1<<r))
                {
                        rep(y,r) if((i>>y)&1) rep(x,c) S[y][x]=!S[y][x];

                        res=0;
                        rep(x,c){ v=0; rep(y,r){ v+=S[y][x]?1:0; } res+=max(v,r-v); }
                        ans=max(ans,res);

                        rep(y,r) if((i>>y)&1) rep(x,c) S[y][x]=!S[y][x];
                }

                cout<<ans<<endl;
        }
        return 0;
}