#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Edge = int;
using Graph = vector<vector<Edge>>;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define SORT(v) sort((v).begin(), (v).end())
#define RSORT(v) sort((v).rbegin(), (v).rend())
const ll MOD = 1000000007;
const ll nmax = 8;
const ll INF = 1e13;
const int MAX = 510000;
bool graph[nmax][nmax];
long long fac[MAX], finv[MAX], inv[MAX];

void COMinit()
{
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++)
    {
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

ll COM(int n, int k)
{
    if (n < k)
        return 0;
    if (n < 0 || k < 0)
        return 0;

    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

vector<vector<ll>> dist = vector<vector<ll>>(nmax, vector<ll>(nmax, INF));
struct SegmentTree
{
private:
    ll n;
    vector<ll> node;

public:
    SegmentTree(vector<ll> v)
    {
        ll sz = v.size();
        n = 1;
        while (n < sz)
        {
            n *= 2;
        }
        node.resize(2 * n - 1, INF);

        for (ll i = 0; i < sz; i++)
        {
            node[i + n - 1] = v[i];
        }

        for (ll i = n - 2; i >= 0; i--)
        {
            node[i] = min(node[2 * i + 1], node[2 * i + 2]);
        }
    }
    void update(ll x, ll val)
    {
        x += (n - 1);
        node[x] = val;
        while (x > 0)
        {
            x = (x - 1) / 2;
            node[x] = min(node[2 * x + 1], node[2 * x + 2]);
        }
    }

    // findは半開区間で考える
    ll find(ll a, ll b, ll k = 0, ll l = 0, ll r = -1)
    {
        if (r < 0)
            r = n;

        if (r <= a || b <= l)
            return INF;

        if (a <= l && r <= b)
            return node[k];

        ll vl = find(a, b, 2 * k + 1, l, (l + r) / 2);
        ll vr = find(a, b, 2 * k + 2, (l + r) / 2, r);
        return min(vl, vr);
    }
};
void warshall_floyd(ll n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            for (size_t k = 0; k < n; k++)
            {
                dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k]);
            }
        }
    }
}

class UnionFind
{
public:
    vector<ll> Parent;

    UnionFind(ll N)
    {
        Parent = vector<ll>(N, -1);
    }
    ll find(ll A)
    {
        if (Parent[A] < 0)
            return A;
        return Parent[A] = find(Parent[A]);
    }

    ll size(ll A)
    {
        return -Parent[find(A)];
    }

    bool Union(ll A, ll B)
    {
        A = find(A);
        B = find(B);
        if (A == B)
        {
            return false;
        }
        if (size(A) < size(B))
            swap(A, B);

        Parent[A] += Parent[B];
        Parent[B] = A;

        return true;
    }
};

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    ll g = gcd(a, b);
    return a / g * b;
}

ll mulMod(ll a, ll b)
{
    return (((a % MOD) * (b % MOD)) % MOD);
}

ll powMod(ll a, ll p)
{
    if (p == 0)
    {
        return 1;
    }
    else if (p % 2 == 0)
    {
        ll half = powMod(a, p / 2);
        return mulMod(half, half);
    }
    else
    {
        return mulMod(powMod(a, p - 1), a);
    }
}

ll ceil(ll a, ll b)
{
    return (a + b - 1) / b;
}

vector<ll> tsort(Graph G)
{
    ll N = G.size();
    vector<ll> in(N);
    for (auto &&edges : G)
    {
        for (auto &&edge : edges)
        {
            in[edge]++;
        }
    }

    queue<int> que;

    for (int i = 0; i < N; i++)
    {
        if (in[i] == 0)
        {
            que.push(i);
        }
    }
    int cnt = 0;
    vector<ll> ans;
    while (!que.empty())
    {
        int v = que.front();
        que.pop();
        ans.push_back(v);
        for (auto &&next : G[v])
        {

            in[next]--;
            if (in[next] == 0)
            {
                que.push(next);
            }
        }
    }
    return ans;
}


void solve(long long D, std::vector<long long> c, std::vector<std::vector<long long>> s, std::vector<long long> t){
    ll score = 0;
    vector<ll> last(26,-1);
    for (int i = 0; i < D; i++)
    {
        ll contest = t[i];
        contest--;
        score += s[i][contest];
        last[contest] = i;
        ll minus = 0;
        for (int j = 0; j < 26; j++)
        {
            minus += c[j] * (i-last[j]);
        }
        score -= minus;
        cout << score << endl;
    }
    
}

int main(){
    long long D;
    scanf("%lld",&D);
    std::vector<long long> c(26);
    for(int i = 0 ; i < 26 ; i++){
        scanf("%lld",&c[i]);
    }
    std::vector<std::vector<long long>> s(D, std::vector<long long>(26));
    for(int i = 0 ; i < D ; i++){
        for(int j = 0 ; j < 26 ; j++){
            scanf("%lld",&s[i][j]);
        }
    }
    std::vector<long long> t(D);
    for(int i = 0 ; i < D ; i++){
        scanf("%lld",&t[i]);
    }
    solve(D, std::move(c), std::move(s), std::move(t));
    return 0;
}
