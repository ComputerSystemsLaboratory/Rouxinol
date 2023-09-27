#include <bits/stdc++.h>
 
using namespace std;
 
#define INF 1001000100010001000
#define MOD 1000000007
#define EPS 1e-10
#define int long long
#define rep(i, N) for (int i = 0; i < N; i++)
#define Rep(i, N) for (int i = 1; i < N; i++)
#define For(i, a, b) for (int i = (a); i < (b); i++)
#define pb push_back
#define mp make_pair
#define i_i pair<int, int>
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define vp vector< i_i >
#define all(a) (a).begin(), (a).end()
#define Int(x) int x; scanf("%lld", &x);
 
//int dxy[5] = {0, 1, 0, -1, 0};
// assign

vi tetra, odd_tetra;
vi table(1000001, INF), dp(1000001, INF);

void make_tetra();
void make_odd_tetra();


signed main()
{
    make_tetra();
    make_odd_tetra();

    Int(n);

    while (n) {
        cout << dp[n] << " " << table[n] << endl;
        cin >> n;
    }

    return 0;
}


void make_tetra()
{
    Rep(i, 181) {
        tetra.pb(i * (i + 1) * (i + 2) /6);
    }
    dp[0] = 0;
    Rep(x, 1000000) {
        int ret = INF;
        for (int i : tetra) {
            if (x < i) {
                break;
            } else {
                ret = min(ret, dp[x - i] + 1);
            }
        }
        dp[x] = ret;
    }
}

void make_odd_tetra()
{
    for (int i : tetra) {
        if (i % 2) {
            odd_tetra.pb(i);
            table[i] = 1;
        }
    }
    table[0] = 0;
    Rep(x, 1000000) {
        int ret = INF;
        for (int i : odd_tetra) {
            if (x < i) {
                break;
            } else {
                ret = min(ret, table[x - i] + 1);
            }
        }
        table[x] = ret;
    }
}