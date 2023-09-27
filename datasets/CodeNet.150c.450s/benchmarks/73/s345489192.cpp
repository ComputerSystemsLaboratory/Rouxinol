/*
ID: barish21
LANG: C++14
TASK: test
*/

/****Author: Barish Namazov****/
#include <bits/stdc++.h>

using namespace std;

/***TEMPLATE***/
#define intt long long

#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()

#define F first
#define S second
#define pb push_back

#define IO ios_base::sync_with_stdio(false);cin.tie();

const intt max4 = 10004;
const intt maxx = 100005;
const intt max6 = 1000006;
const intt max7 = 10000007;

const intt lg4 = 13;
const intt lg5 = 17;
const intt lg6 = 20;

const intt INF = 2LL * 1000000000;
/***************/

/***Additional Functions***/

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

const intt init = (1 << 31) - 1;

intt n, q;
intt t[maxx << 2];

void update (intt v, intt l, intt r, intt i, intt val) {
    if (i < l || i > r)
        return;
    if (l == r) {
        t[v] += val;
        return;
    }
    intt mid = (l + r) >> 1;
    update (v << 1, l, mid, i, val);
    update (v << 1 | 1, mid + 1, r, i, val);
    t[v] = t[v << 1] + t[v << 1 | 1];
}

intt query (intt v, intt l, intt r, intt i, intt j) {
    if (j < l || i > r)
        return 0;
    if (i <= l && r <= j)
        return t[v];
    intt mid = (l + r) >> 1;
    return query (v << 1, l, mid, i, j) + query (v << 1 | 1, mid + 1, r, i, j);
}

int main() {
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    IO;
    cin >> n >> q;
    while (q --) {
        intt type, x, y;
        cin >> type >> x >> y;
        if (type == 0)
            update (1, 1, n, x, y);
        else
            cout << query (1, 1, n, x, y) << endl;
    }
    return 0;
}