#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
int n,m;
pair<int,int> pii[10004];

void solve() {
    int d,p;
    rep(i,n) {
        cin>>d>>p;
        pii[i] = make_pair(-p,d);
    }
    sort(pii,pii+n);
    int ans=0;

    rep(i,n) {
        int p2 = -pii[i].first;
        int dist = pii[i].second;
        //cout<<(-pii[i].first)<<","<<dist<<","<<pii[i].second<<endl;
        if(m-dist<0) {
            ans += (dist-m)*p2;
            m = 0;
        }
        else {
            m-=dist;
        }

    }
    cout<<ans<<endl;
    rep(i,n) {
        pii[i] = make_pair(0,0);
    }

}

int main() {
    while(cin>>n>>m) {
        if(n+m==0) return 0;
        solve();

    }

    return 0;
}