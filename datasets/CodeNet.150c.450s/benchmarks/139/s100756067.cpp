#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod107 1000000007
#define rep(i, n) for (int i = 0; i < n; ++i)
using Graph = vector<vector<int>>;
#define grepq priority_queue<double, std::vector<double>, std::greater<double>>
#define all(v) v.begin(), v.end()
#define PI acos(-1)
const ll INF = 10010001010;
const int inf = 1000034000;
typedef vector<ll> vecl;
typedef vector<int> veci;
typedef tuple<string, int, int> TUP;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout << fixed << setprecision(15);
    int N,M;
    cin >> N >> M;
    Graph G(N);
    for (int i = 0; i < M;i++)
    {
        int a,b;
        cin >> a >> b;
        a--, b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    queue<ll> que;
    vector<ll> seen(N, -1);
    que.push(0);
    seen[0] = 0;
    while (!que.empty())
    {
        int now = que.front();
        que.pop();
        for(int next : G[now]){
            if(seen[next] == -1){
                //cout << now << ": " << next << endl;
                seen[next] = now;
                que.push(next);
            }
        }
    }
    cout << "Yes" << endl;
    for (int i = 1; i < N; i++)
    {
        cout << seen[i]+1 << endl;
    }
}
