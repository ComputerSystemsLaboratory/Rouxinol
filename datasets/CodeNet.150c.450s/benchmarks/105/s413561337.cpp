#include <bits/stdc++.h>
using namespace std;
#define m_p make_pair
#define all(x) (x).begin(),(x).end()
#define sz(x) ((int)(x).size())
#define fi first
#define se second
typedef long long ll;
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
mt19937 rnf(2106);
const int N = 202;

const int m = 60;
ll u[m];

void ave(ll x)
{
    for (int i = m - 1; i >= 0; --i)
    {
        if ((x & (1LL << i)))
        {
            if (!u[i])
            {
                u[i] = x;
                return;
            }
            x ^= u[i];
        }
    }
}

bool stg(ll x)
{
    for (int i = m - 1; i >= 0; --i)
    {
        if ((x & (1LL << i)))
            x ^= u[i];
    }
    return (x == 0);
}

int n;
ll a[N];
char s[N];

void solv()
{
    for (int i = 0; i < m; ++i)
        u[i] = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%lld", &a[i]);
    scanf(" %s", s);
    for (int i = n - 1; i >= 0; --i)
    {
        if (s[i] == '1')
        {
            if (!stg(a[i]))
            {
                printf("1\n");
                return;
            }
        }
        else
        {
            ave(a[i]);
        }
    }
    printf("0\n");
}

int main()
{
    #ifdef SOMETHING
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif // SOMETHING
    //ios_base::sync_with_stdio(false), cin.tie(0);
    int tt;
    scanf("%d", &tt);
    while (tt--)
        solv();
    return 0;
}

//while ((double)clock() / CLOCKS_PER_SEC <= 0.9){}
