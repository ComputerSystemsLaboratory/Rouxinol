#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
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
#define chmin(a,b) a=min(a,b)
#define chmax(a,b) a=max(a,b)
#define rep(i,x) for(int i=0;i<(x);++i)
#define rep1(i,x) for(int i=1;i<=(x);++i)
#define rrep(i,x) for(int i=(x)-1;i>=0;--i)
#define rrep1(i,x) for(int i=(x);i>=1;--i)
#define FOR(i,a,x) for(int i=(a);i<(x);++i)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

template<typename T>T&get(){T a;cin >> a;return a;}
template<typename T>T&rev(T&a){reverse(all(a));return a;}
template<typename T>istream&operator>>(istream&is,vector<T>&vec){rep(i,vec.size())is>>vec[i];return is;}
template<typename T>vector<T>&sort(vector<T>a){sort(all(a));return a;}

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> P;

const int inf = 1e9;
const ll linf = 3e18;

int d[10][10];
int N;
bool found[10];

void wf()
{
    rep(k, 10) rep(i, 10) rep(j, 10) {
        chmin(d[i][j], d[i][k] + d[j][k]);
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> N, N) {
        memset(found, 0, sizeof(found));
        fill(d[0], d[10], inf);
        rep(i, 10) d[i][i] = 0;

        rep(i, N) {
            int a, b, c; cin >> a >> b >> c;
            d[a][b] = d[b][a] = c;
            found[a] = found[b] = true;
        }

        wf();

        int mi = inf, a;

        rep(i, 10) if (found[i]) {
            int sum = 0;
            rep(j, 10) if (found[j]) {
                sum += d[i][j];
            }
            if (mi > sum) {
                mi = sum;
                a = i;
            }
        }

        cout << a << " " << mi << endl;
    }
}