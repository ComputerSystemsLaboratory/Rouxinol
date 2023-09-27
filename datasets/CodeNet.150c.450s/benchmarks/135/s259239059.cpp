// テ・ツ淞コテヲツ慊ャテ」ツδ?」ツδウテ」ツδ療」ツδャテ」ツδシテ」ツδ?

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <functional>
using namespace std;

#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define repq(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define repr(i,a,n) for(int (i)=(a); (i)>=(n); (i)--)
#define int long long int

template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}

typedef pair<int, int> pii;
typedef long long ll;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
constexpr ll INF = 1001001001001001LL;
constexpr ll MOD = 1000000007LL;

int N, M;
int h[2000], w[2000];
signed main() {
    while(cin >> N >> M, N || M) {
        map<int, int> ra, rb;

        rep(i,0,N) cin >> h[i+1];
        rep(i,0,M) cin >> w[i+1];
        rep(i,0,N) h[i+1] += h[i];
        rep(i,0,M) w[i+1] += w[i];

        rep(i,0,N) repq(j,i+1,N) {
            ra[ h[j] - h[i] ]++;
        }
        rep(i,0,M) repq(j,i+1,M) {
            rb[ w[j] - w[i] ]++;
        }

        int ans = 0;
        for(auto x : ra) {
            int val = x.first;
            ans += ra[val] * rb[val];
        }
        cout << ans << endl;
    }
    return 0;
}