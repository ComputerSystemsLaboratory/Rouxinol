#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

struct edge
{
    int u, v, cost;
};

bool comp(const edge &e1, const edge &e2)
{
    return e1.cost < e2.cost;
}

int n, E, A[100][100];
int p[10010];
vector<edge> es(0);

void init(int n)
{
    rep(i, n) p[i] = i;
}

int root(int a)
{
    if (p[a] == a)
        return a;
    return (p[a] = root(p[a]));
}

bool is_same_set(int a, int b)
{
    return root(a) == root(b);
}

void unite(int a, int b)
{
    p[root(a)] = root(b);
}

int kruskal()
{
    int sum = 0;
    E = 0;
    rep(i, n) rep(j, i)
    {
        if (A[i][j] != -1)
        {
            E++;
            edge e;
            e.u = i;
            e.v = j;
            e.cost = A[i][j];
            es.push_back(e);
        }
    }
    sort(es.begin(), es.end(), comp);
    rep(i, E)
    {
        edge e = es[i];
        if (!is_same_set(e.u, e.v))
        {
            unite(e.u, e.v);
            sum += e.cost;
        }
    }
    return sum;
}

int main()
{
    cin >> n;
    rep(i, n) rep(j, n) cin >> A[i][j];
    init(n);
    int ans = kruskal();
    cout << ans << endl;
    return 0;
}
