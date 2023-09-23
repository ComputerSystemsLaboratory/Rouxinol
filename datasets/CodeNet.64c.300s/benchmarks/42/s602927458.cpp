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

bool fld[21][21];

signed main()
{
    int N;

    while (cin >> N, N) {
        memset(fld, false, sizeof(fld));
        rep(i, N) {
            int x, y; cin >> x >> y; 

            fld[y][x] = true;
        }

        int cnt = 0;

        pii now = pii(10, 10);

        if (fld[now.fst][now.scd]) {
            fld[now.fst][now.scd] = false;
            cnt++;
        }

        int M;

        cin >> M;

        rep(i, M) {
            char c; cin >> c;
            int v; cin >> v;

            rep(j, v) {
                if (c == 'N') now.fst ++;
                if (c == 'E') now.scd ++;
                if (c == 'S') now.fst --;
                if (c == 'W') now.scd --;

                if (fld[now.fst][now.scd]) {
                    fld[now.fst][now.scd] = false;
                    cnt++;
                }
            }
        }

        if (cnt == N) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}