#include <algorithm>
#include <bitset>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

#define repi(i,a,b) for(int i=(a);i<(b);i++)
#define rep(i,a) repi(i,0,a)
#define repd(i,a,b) for(int i=(a);i>=(b);i--)
#define repit(i,a) for(__typeof((a).begin()) i=(a).begin();i!=(a).end();i++)

#define all(u) (u).begin(),(u).end()
#define rall(u) (u).rbegin(),(u).rend()
#define UNIQUE(u) (u).erase(unique(all(u)),(u).end())

#define pb push_back
#define mp make_pair
#define INF 1e9
#define EPS 1e-9
#define PI acos(-1.0)

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int n;

int day(int y, int m) {
    if (y % 3 == 0) return 20;
    return 19 + m % 2;
}

int main()
{
    cin >> n;
    rep(i, n) {
        int y, m, d;
        cin >> y >> m >> d;

        int ans = 0;
        while (y < 1000) {
            ++ans;
            ++d;
            if (d > day(y, m)) {
                d = 1;
                ++m;
                if (m > 10) {
                    m = 1;
                    ++y;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}