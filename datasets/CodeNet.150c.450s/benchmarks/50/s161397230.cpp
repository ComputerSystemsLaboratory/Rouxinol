#include <bits/stdc++.h>
using namespace std;

#define DUMP(x) cerr << #x << "=" << x << endl
#define DUMP2(x, y) cerr<<"("<<#x<<", "<<#y<<") = ("<<x<<", "<<y<<")"<< endl
#define BINARY(x) static_cast<bitset<16> >(x)

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)

#define in_range(x, y, w, h) (0<=(int)(x) && (int)(x)<(int)(w) && 0<=(int)(y) && (int)(y)<(int)(h))
#define ALL(a) (a).begin(),(a).end()

typedef long long ll;
const int INF   = 1e9;
const ll  INFLL = 1e18;
typedef pair<int, int> PII;
int dx[4]={0, -1, 1, 0}, dy[4]={-1, 0, 0, 1};

int main()
{
    ios::sync_with_stdio(false);

    const vector<int> coins = {500, 100, 50, 10, 5, 1};
    int N;
    while (cin >> N, N) {
        N = 1000 - N;
        int ans = 0;
        for (auto c : coins) {
            int tmp = N / c;
            ans += tmp;
            N -= tmp * c;
        }
        cout << ans << endl;
    }
}