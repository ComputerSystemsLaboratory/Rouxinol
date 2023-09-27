#include <algorithm>
#include <bitset>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

#define rep(i,a) for(int i = 0;i < (a); i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)
#define repd(i,a,b) for(int i = (a); i >= (b); i--)
#define repit(i,a) for(__typeof((a).begin()) i = (a).begin(); i != (a).end(); i++)
#define all(u) (u).begin(),(u).end()
#define rall(u) (u).rbegin(),(u).rend()
#define UNIQUE(u) (u).erase(unique(all(u)),(u).end())
#define pb push_back
#define mp make_pair
#define INF 1e9
#define EPS 1e-9
#define PI acos(-1.0)

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define N 1000001

int dp[N], dp1[N];

void gen()
{
    memset(dp, 37, sizeof(dp));
    memset(dp1, 37, sizeof(dp1));
    dp[0] = dp1[0] = 0;

    for (int n = 1; ; ++n) {
        int p = n * (n + 1) * (n + 2) / 6;
        if (p >= N)
            break;
        for (int i = p; i < N; ++i) {
            dp[i] = min(dp[i], dp[i - p] + 1);
            if (p & 1)
                dp1[i] = min(dp1[i], dp1[i - p] + 1);
        }
    }
}

int main()
{
    gen();

    int t;
    while (cin >> t && t)
        cout << dp[t] << ' ' << dp1[t] << endl;

    return 0;
}