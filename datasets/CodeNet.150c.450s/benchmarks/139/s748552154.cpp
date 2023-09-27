#include<bits/stdc++.h>
using namespace std;
using lli = long long;
#define rep(i,n) for(int i=0;i<n;i++)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

lli n, m;

int main(void){
    cin >> n >> m;
    vector<vector<lli>> v(n);
    rep(i, m){
        lli a, b;
        cin >> a >> b;
        a--;
        b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector<lli> d(n, -1);
    d[0] = 0;
    queue<lli> q;
    q.push(0);
    while(!q.empty()){
        lli x = q.front();
        q.pop();
        for(auto to : v[x]){
            if(d[to] >= 0) continue;
            d[to] = x;
            q.push(to);
        }
    }
    bool ok = true;
    rep(i, n) if(d[i] < 0) ok = false;
    if(!ok) cout << "No" << endl;
    else{
        cout << "Yes" << endl;
        rep(i, n-1){
            cout << d[i+1]+1 << endl;
        }
    }
    return 0;
}
