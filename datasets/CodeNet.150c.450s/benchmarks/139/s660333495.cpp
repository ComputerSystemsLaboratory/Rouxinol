#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define all(v) v.begin(), v.end()
typedef long long ll;
typedef pair<int, int> P;
typedef pair<long long, long long> Pll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vll;
typedef vector<vector<long long>> vvll;
typedef vector<string> vs;
const long long INF = 1LL << 60;
const int INT_INF = 1 << 30;
const double PI = acos(-1.0);

int main() {
    int N, M;
    cin >> N >> M;
    vvi v(N + 1);
    rep(i, M){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector<bool> checked(N + 1, false);
    queue<int> q;
    q.push(1);
    vi ans(N + 1);
    while(!q.empty()){
        int now = q.front();
        q.pop();
        checked[now] = true;
        for (int x: v[now]){
            if (!checked[x]){
                ans[x] = now;
                checked[x] = true;
                q.push(x);
            }
        }
    }
    cout << "Yes" << endl;
    rep2(i, 2, N + 1){
        cout << ans[i] << endl;
    }
}
