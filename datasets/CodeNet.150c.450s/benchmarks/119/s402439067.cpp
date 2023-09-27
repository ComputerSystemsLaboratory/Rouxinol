#include <iostream>

using namespace std;

#define rep(i, n) REP(i, 0, n)
#define REP(i,k,n) for(int i = k; i < n; i++)
#define mmax(start, end) *max_element(start, end)
#define mmin(start, end) *min_element(start, end)
#define argmax max_element
#define argmin min_element
#define push push_back
#define pop pop_back
#define ALL(x) (x).begin(), (x).end()

typedef long long ll;
typedef string str;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

template<class T = ll> T in() {
    T _in;
    cin >> _in;
    return _in;
}

int w, h;
bool c[55][55] = {};

void DFS(int y, int x) {
    c[y][x] = 0;
    rep(i, 8) {
        if(y+dy[i]<0 || y+dy[i]>=h || x+dx[i]<0 || x+dx[i]>=w) continue;
        if(c[y + dy[i]][x + dx[i]]) {
            DFS(y + dy[i], x + dx[i]);
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    while(cin >> w >> h,w){
        rep(i, h) {
            rep(j, w) {
                cin >> c[i][j];
            }
        }

        int ans = 0;
        // 探索
        rep(y, h) {
            rep(x, w) {
                if (c[y][x]) {
                    DFS(y, x);
                    ans++;
                }
            }
        }

        cout << ans << endl;
    };
    return 0;
}

