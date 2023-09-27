#include <bits/stdc++.h>
using namespace std;
#define int long long   // <-----!!!!!!!!!!!!!!!!!!!

#define rep(i,n) for (int i=0;i<(n);i++)
#define rep2(i,a,b) for (int i=(a);i<(b);i++)
#define rrep(i,n) for (int i=(n)-1;i>=0;i--)
#define rrep2(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define all(a) (a).begin(),(a).end()

typedef long long ll;
typedef pair<int, int> P;

int dy[4] = {1, 0, 0, -1};
int dx[4] = {0, 1, -1, 0};

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    map<string, int> mp;
    mp["N"] = 0;
    mp["E"] = 1;
    mp["W"] = 2;
    mp["S"] = 3;
    while (cin >> n, n) {
        vector<vector<bool>> exist(21, vector<bool>(21, false));
        rep(i, n) {
            int x, y;
            cin >> x >> y;
            exist[x][y] = true;
        }
        int m;
        cin >> m;
        int x = 10, y = 10;
        int num_done = 0;
        rep(i, m) {
            string c;
            int step;
            cin >> c >> step;
            int k = mp[c];
            rep(j, step) {
                x += dx[k], y += dy[k];
                if (exist[x][y]) {
                    exist[x][y] = false;
                    num_done++;
                }
            }
        }
        cout << (num_done == n ? "Yes" : "No") << endl;
    }
}