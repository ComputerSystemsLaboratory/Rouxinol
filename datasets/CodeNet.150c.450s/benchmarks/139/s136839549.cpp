#include <bits/stdc++.h>

#define endl     '\n'

using namespace std;

typedef long long ll;

const int dx[] = { 1, -1, 0, 0, 1, 1, -1, -1 };
const int dy[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
const char dir[] = {'D', 'U', 'R', 'L'};

void Fast() { cin.sync_with_stdio(0); cin.tie(0); cout.tie(0); }
void File()
{
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    //freopen("output.out", "w", stdout);
    #endif
}

const int N = 1e5 + 9, M = 2e5 + 9, oo = 0x3f3f3f3f;

/**----------------->>  Quality Over Quantity  <<----------------**/

int Head[N], Next[M << 1], To[M << 1], signpost[N], ne, n, u, v, m;

void addEdge(int from, int to)
{
    Next[++ne] = Head[from];
    Head[from] = ne;
    To[ne] = to;
}

void BFS(int src)
{
    memset(signpost, 0x3f, sizeof signpost);
    queue <int> Q;
    Q.push(src);

    int node;
    while(Q.size())
    {
        node = Q.front(); Q.pop();
        for(int i = Head[node]; i; i = Next[i]) if(signpost[To[i]] == oo)
        {
            signpost[To[i]] = node;
            Q.push(To[i]);
        }
    }
}

void Solve()
{
    cin >> n >> m;

    while(m--)
    {
        cin >> u >> v;
        addEdge(u, v);
        addEdge(v, u);
    }

    BFS(1);

    auto isConnected = [&] () -> bool {
        for(int i = 2; i <= n; ++i)
            if(signpost[i] == oo) return false;
        return true;
    };

    if(!isConnected()) cout << "No" << endl;
    else
    {
        cout << "Yes" << endl;
        for(int i = 2; i <= n; ++i)
            cout << signpost[i] << endl;;
    }
}

void MultiTest(bool Tests = 0)
{
    int tc = 1; (Tests) && (cin >> tc);
    for(int i = 1; i <= tc; ++i)
        Solve();
}

/**------------------------->>  Main  <<-------------------------**/

int main()
{
    Fast();  MultiTest();
}
