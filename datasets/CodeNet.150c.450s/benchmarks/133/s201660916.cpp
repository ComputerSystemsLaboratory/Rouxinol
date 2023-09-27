#include <iostream>
#include <utility>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#include <stack>
#include <set>
#include <deque>
#include <cmath>
#include <cassert>

using namespace std;
typedef long long ll;
ll mod = 1e9+7;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int main() {
    int d;
    cin >> d;
    vector<int> c(26);
    rep(i, 26) cin >> c[i];
    vector<vector<int>> s(d, vector<int>(26));
    rep(i, d) rep(j, 26) cin >> s[i][j];
    vector<int> t(d);
    rep(i, d) {
        int tmp_t;
        cin >> tmp_t;
        --tmp_t;
        t[i] = tmp_t;
    }
    //cout << "test" << endl;
    int ans = 0;
    vector<int> last_d(26, 0);
    for (int i = 1; i <= d; ++i) {
        //cout << i << " " << t[i-1] << endl;
        rep(j, 26) {
            if (j == t[i-1]) {
                //cout << i << " " << j << " "<< "test" << " " << s[i-1][t[i-1]] << endl;
                ans += s[i-1][t[i-1]];
                last_d[j] = i;
            }
            else {
                //cout << i << " " << j << " " << c[j] << " " << i - last_d[j] << endl;
                ans -= c[j] * (i - last_d[j]);
            }
            //cout << i << " " << ans << endl;
        }
        cout << ans << endl;
    }
    return 0;
}
