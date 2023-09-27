#include <queue>
#include <iostream>
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
vector<int> graph[100010];
int main() {
    cin >> n >> m;
    rep(i, 0, m){
        int a, b; cin >> a >> b;
        a--;b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    queue<int> que;
    vector<int> obj(n, -1);
    que.push(0);

    while (que.size()) {
        int now = que.front(); que.pop();
        for(auto x : graph[now]){
            if(obj[x] != -1) continue;
            obj[x] = now;
            que.push(x);
        }
    }

    cout << "Yes" << endl;
    rep(i, 1, n){
        cout << obj[i]+1 << endl;
    }
    return 0;
}
