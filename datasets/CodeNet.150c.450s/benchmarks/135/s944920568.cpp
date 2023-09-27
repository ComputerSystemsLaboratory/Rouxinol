#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
int n,m;
vector<int> y;
vector<int> x;

void solve() {
    map<int,int> line;
    int add = 0;
    y.push_back(0);
    x.push_back(0);
    rep(i,n) {
        int a; cin>>a;
        add += a;
        y.push_back(add);
    }
    add = 0;
    rep(i,m) {
        int a; cin>>a;
        add += a;
        x.push_back(add);
    }
    rep(i,y.size()) rep(j,x.size()) line[y[i]-x[j]]++;

    int ans = 0;
    map<int,int>::iterator it = line.begin();
    while(it!=line.end()) {
        ans += it->second*(it->second-1)/2;

        it++;
    }

    cout<<ans<<endl;
    y.clear();
    x.clear();

}

int main() {
    while(cin>>n>>m) {
        if(n+m==0) return 0;
        solve();
    }

    return 0;
}