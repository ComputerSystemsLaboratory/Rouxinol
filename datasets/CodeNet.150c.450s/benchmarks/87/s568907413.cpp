#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define REP(i,n) for (int i = 1; i < (int)(n); i++)
template<class T> bool chmin(T &a, T b) {if(a>b) {a=b;return 1;}return 0;}
using namespace std;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
using P = pair<int,int>;
const double inf = 1e9;
const int mod = 1e5;
const int MAX = 5005;

struct status {int y, x, len;};

int main() {
    int h;
    while (cin >> h && h) {
        int ans = 0;
        vvint field(h,vint(5));
        rep(i,h)rep(j,5) cin >> field[i][j];
        while (true) {
            bool update = false;
            vector<status> del;
            rep(i,h) {
                int index = -1;
                rep(j,3) {
                    if (field[i][j] == field[i][j+1] && field[i][j+1] == field[i][j+2]) {
                        index = j;
                        break;
                    }
                }
                if (index == -1) continue;
                int ct = 0;
                for (int j = 0; j+index < 5; j++) {
                    if (field[i][index] == field[i][index+j]) ct++;
                    else break;
                }
                del.push_back(status{i,index,ct});
                if (field[i][index] != 0) update = true;
                ans += ct*field[i][index];
            }
            if (del.empty() || !update) break;
            for (auto d: del) {
                for (int j = d.x; j < (d.x+d.len); j++) {
                    field[d.y][j] = 0;
                }
            }
            rep(j,5) {
                deque<int> q;
                rep(k,h) {
                    if (field[k][j] != 0) q.push_back(field[k][j]);
                }
                while (q.size() < h) q.push_front(0);
                int a = h-1;
                while (!q.empty()) {
                    int x = q.back(); q.pop_back();
                    field[a--][j] = x;
                }
            }
        }
        cout << ans << endl;
    }
}
