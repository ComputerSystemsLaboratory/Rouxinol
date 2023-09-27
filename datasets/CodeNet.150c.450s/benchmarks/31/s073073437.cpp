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
#define rep(i,x) for(int i=0;i<(x);++i)
#define rep1(i,x) for(int i=1;i<=(x);++i)
#define rrep(i,x) for(int i=(x)-1;i>=0;--i)
#define rrep1(i,x) for(int i=(x);i>=1;--i)
#define FOR(i,a,x) for(int i=(a);i<(x);++i)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()

template<typename T>bool chmax(T&a,T b){if(a<b){a=b;return true;}return false;}
template<typename T>bool chmin(T&a,T b){if(a>b){a=b;return true;}return false;}
template<typename T>T get(){T a;cin>>a;return a;}
template<typename T>T rev(T a){reverse(all(a));return a;}
template<typename T>istream&operator>>(istream&is,vector<T>&vec){rep(i,vec.size())is>>vec[i];return is;}
template<typename T>vector<T>&sort(vector<T>&a){sort(all(a));return a;}

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> P;

const int inf = 1e9;
const ll linf = 3e18;

int mi[200001];
int R[200001];

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;

    mi[0] = inf;

    rep1(i, N) {
        cin >> R[i];
        mi[i] = min(mi[i - 1], R[i]);
    }

    int ma = -inf;

    for (int i = 2; i <= N; ++i) {
        ma = max(ma, R[i] - mi[i - 1]);
    }

    cout << ma << endl;
}