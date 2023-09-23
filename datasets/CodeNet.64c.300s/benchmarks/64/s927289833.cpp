#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <bitset>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
#include <map>
#include <utility>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define _USE_MATH_DEFINES

#define fi first
#define se second
#define pb push_back

#define gcd __gcd

#define check cerr << "pass" << endl;
#define debug(x) cerr << #x << " is " << x < endl;

typedef long long ll;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef pair<ll,ll> llll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;

const int MOD = 1000000007;

ll mod_expo(ll a, ll b){
    if (a == 0 && b == 0) return -1;    // error
    if (a == 0)           return  0;

    ll tmp = 1;
    while (b > 1){
        if (b&1) tmp = (tmp * a) % MOD;

        a = (a * a) % MOD;
        b >>= 1;
    }

    return (a * tmp) % MOD;
}

const int MAXN = 1000005;

int N, M, Q;

int main(){

    ios_base::sync_with_stdio(0); cin.tie(0);

    int a, b;
    cin >> a >> b;

    cout << gcd(a,b) << endl;

    return 0;
}