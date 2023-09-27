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

intt n, q;
intt par[maxx];

void init () {
    memset (par, -1, sizeof (par));
}

intt Find (intt x) {
    return (par[x] < 0 ? x : Find (par[x]));
}

void Union (intt x, intt y) {
    x = Find (x), y = Find (y);
    if (x == y)
        return;
    if (par[x] > par[y])
        swap (x, y);
    par[x] += par[y];
    par[y] = x;
}

int main() {
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //ofstream fout ("test.out");
    //ifstream fin ("test.in");
    IO;
    init ();
    cin >> n >> q;
    while (q --) {
        intt type, x, y;
        cin >> type >> x >> y;
        if (type == 0)
            Union (x, y);
        else
            cout << (Find (x) == Find (y)) << endl;
    }
    return 0;
}