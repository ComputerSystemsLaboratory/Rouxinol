/****Author: Barish Namazov****/
#include <bits/stdc++.h>

using namespace std;

/***TEMPLATE***/
#define intt long long
#define pii pair<intt,intt>

#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()

#define F first
#define S second
#define pb push_back

#define IO ios_base::sync_with_stdio(false);cin.tie();
#define endl '\n'

const intt max4 = 10004;
const intt maxx = 100005;
const intt max6 = 1000006;
const intt max7 = 10000007;

const intt lg4 = 13;
const intt lg5 = 17;
const intt lg6 = 20;

const intt INF = 2LL * 1000000000;

/***************/

intt powmod (intt a, intt b, intt mod) {
    intt res = 1;
    a %= mod;
    for (; b; b >>= 1) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
    }
    return res;
}

intt gcd (intt a, intt b) {
    while (b > 0) {
        intt t = a % b;
        a = b, b = t;
    }
    return a;
}

intt lcm (intt a, intt b) {
    return (a / gcd (a, b)) * b;
}

intt is_prime (intt n) {
    if (n <= 1 || n > 3 && (n % 2 == 0 || n % 3 == 0))
        return 0;
    for (intt i = 5, t = 2; i * i <= n; i += t, t = 6 - t)
        if (n % i == 0)
            return 0;
    return 1;
}

/**************************/

intt n, m, source;
intt a, b, c;
vector <pii> g[maxx];
intt used[maxx], dis[maxx];
priority_queue <pii, vector <pii>, greater <pii> > pq;
int main() {
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    IO;
    cin >> n >> m >> source; source++;
    for (intt i = 1; i <= m; i++) {
        cin >> a >> b >> c; a++, b++;
        g[a].pb ({b, c}); //g[b].pb ({a, c}); delete "//" if graph is undirected
    }
    for (intt i = 1; i <= n; i++) dis[i] = INF;
    dis[source] = 0;
    pq.push ({0, source});
    while (!pq.empty()) {
        a = pq.top().S; pq.pop();
        if (used[a]) continue; used[a] = 1;
        for (auto u : g[a]) {
            b = u.F, c = u.S;
            if (dis[a] + c < dis[b]) {
                dis[b] = dis[a] + c;
                pq.push ({dis[b], b});
            }
        }
    }
    for (intt i = 1; i <= n; i++) {
        if (dis[i] == INF)
            cout << "INF" << endl;
        else
            cout << dis[i] << endl;
    }
    return 0;
}