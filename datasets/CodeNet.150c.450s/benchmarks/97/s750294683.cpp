#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

pint a[201];
int main(){
    int n;
    int ni,di;
    while(cin>>n,n){
        int mnx=0,mny=0,mxx=0,mxy=0;
        FOR(i,1,n){
            cin>>ni>>di;
            int x=a[ni].first,y=a[ni].second;
            if(di==0) --x;
            else if(di==1) --y;
            else if(di==2) ++x;
            else if(di==3) ++y;
            mnx=min(mnx,x);
            mny=min(mny,y);
            mxx=max(mxx,x);
            mxy=max(mxy,y);
            a[i]={x,y};
        }
        cout<<mxx-mnx+1<<" "<<mxy-mny+1<<endl;
    }
    return 0;
}
