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

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

#define fst first
#define scd second
#define PB push_back
#define MP make_pair
#define rep(i,x) for(int i=0;i<(x);++i)
#define rep1(i,x) for(int i=1;i<=(x);++i)
#define rrep(i,x) for(int i=(x)-1;i>=0;--i)
#define rrep1(i,x) for(int i=(x);i>=1;--i)
#define FOR(i,a,x) for(int i=(a);i<(x);++i)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

#define omajinai ios::sync_with_stdio(false);cin.tie(0)

template<typename T>bool chmax(T&a,T b){if(a<b){a=b;return true;}return false;}
template<typename T>bool chmin(T&a,T b){if(a>b){a=b;return true;}return false;}
template<typename T>T get(){T a;cin>>a;return a;}
template<typename T>T rev(T a){reverse(all(a));return a;}
template<typename T>istream&operator>>(istream&is,vector<T>&vec){rep(i,vec.size())is>>vec[i];return is;}
template<typename T>vector<T>&sort(vector<T>&a){sort(all(a));return a;}

const int inf = 1e9;
const ll linf = 3e18;
const double eps = 1e-9;

int A[10][10000];
int cnt[10000]; // ???????????????????????°

signed main()
{
    int R, C;
    while (cin >> R >> C, R || C) {
        rep(i, R) rep(j, C) {
            cin >> A[i][j];
        }

        int ma = 0;

        rep(i, 1 << R) {
            memset(cnt, 0, sizeof(cnt));

            rep(j, C) rep(k, R) {
                if (i & 1 << k) {
                    cnt[j] += A[k][j] ^ 1;
                } else {
                    cnt[j] += A[k][j];
                }
            }

            int t = 0;

            rep(j, C) {
                t += max(cnt[j], R - cnt[j]);
            }

            chmax(ma, t);
        }

        cout << ma << endl;
    }
}