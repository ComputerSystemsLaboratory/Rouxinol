#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <fstream>
#include <numeric>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> P;

#define EPS (1e-7)
#define INF 1e18
#define max(p,q)((p)>(q)?(p):(q))
#define min(p,q)((p)<(q)?(p):(q))
#define PI (acos(-1))

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define rep(i, init, n) for(int i = init; i <(int)(n); i++)

int main() {

    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> V(N+1);
    ll a, b;
    REP(i, M){
        cin >> a >> b;
        V[a].push_back(b);
        V[b].push_back(a);
    }
    vector<ll> hint(N+1, -1);
    queue<P> q;
    q.push(P(0, 1));
    while(!q.empty()){
        P tmp = q.front();
        if(hint[tmp.second] < 0) {
            hint[tmp.second] = tmp.first;
        for(auto iter: V[tmp.second]) if(hint[iter] < 0) q.push(P(tmp.second, iter));
        }
        q.pop();
    }
    bool connect = true;
    rep(i, 1, N+1) if (hint[i] < 0) connect = false;
    if (!connect){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    rep(i, 2, N+1) cout << hint[i] << endl;

    return 0;
}
