#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
using ll=long long;
#define rep(i,a,b) for(ll i=a;i<ll(b);i++)
#define repr(i,a,b) for(ll i=a;i>=ll(b);i--)
#define endl "\n"
#define ALL(x) x.begin(),x.end()
#define ALLR(x) x.rbegin(),x.rend()
#define INF 1e9
#define DEBUG(x) cout<<"debug: "<<x<<endl

int n, m;
int main() {
    cin >> n >> m;
    vector<int> graph[n];
    rep(i, 0, m){
        int a, b; cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    queue<int> q;
    vector<int> ans(n, -1);
    q.push(0);
    while (q.size()) {
        int i = q.front(); q.pop();
        for(auto x : graph[i]){
            if(ans[x] != -1) continue;
            ans[x] = i;
            q.push(x);
        }
    }

    cout << "Yes" << endl;
    rep(i, 1, n){
        cout << ans[i]+1 << endl;
    }

    return 0;
}
