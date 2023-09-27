#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <utility>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <functional>

using namespace std;

#define fst first
#define scd second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define omajinai ios::sync_with_stdio(false);cin.tie(0)
#define rep(i,x) for(int i=0;i<(int)(x);++i)
#define rep1(i,x) for(int i=1;i<=(int)(x);++i)

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

template<typename T>T& max(T&a,T&b){if(a>=b)return a;return b;}
template<typename T>T& min(T&a,T&b){if(a<b)return a;return b;}
template<typename T>bool chmax(T&a,T b){if(a<b){a=b;return true;}return false;}
template<typename T>bool chmin(T&a,T b){if(a>b){a=b;return true;}return false;}
template<typename T>T get(){T a;cin>>a;return a;}
template<typename T>T rev(T a){reverse(all(a));return a;}
template<typename T>vector<T>&sort(vector<T>&a){sort(all(a));return a;}

const int inf = 1e9;
const ll linf = 3e18;
const double eps = 1e-9;

int first_prime_factor(int n)
{
    int to = sqrt(n);

    if (n <= 1) return -1;

    for (int i = 2; i <= to; ++i) {
        if (n % i == 0) return i;
    }

    return n;
}

signed main()
{
    int n; cin >> n;
    cout << n << ": ";
    int cnt = 0;
    while (n != 1) {
        if (cnt) cout << ' ';
        int a = first_prime_factor(n);
        cout << a;
        n /= a;
        cnt += 1;
    }
    cout << endl;
}