#include<bits/stdc++.h>

using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

#define MAX 100005
#define INF INT_MAX

typedef long long ll;
typedef pair<int, int> P;

P a[MAX];
map<P, int> memo;

int minMultTime(int s, int e)
{
    if (s >= e) return 0;
    if (memo[P(s,e)]) return memo[P(s,e)];

    int ans = INF;
    rep(i,e-s) {
        int m1 = minMultTime(s,s+i);
        int m2 = minMultTime(s+i+1,e);
        int m3 = a[s].first * a[s+i].second * a[e].second;
        ans = min(ans, m1+m2+m3);
    }
    memo[P(s,e)] = ans;

    return ans;
}

int main(int, char**)
{
    int n;
    cin >> n;

    rep(i,n) {
        cin >> a[i].first;
        cin >> a[i].second;
    }

    cout << minMultTime(0, n-1) << endl;

    return 0;
}

