#include<iostream>
#include<iomanip>
#include<algorithm>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#define REP(i, N) for(int i = 0; i < N; ++i)
#define REEP(i, N) for(int i = N - 1; i >= 0; --i)
using namespace std;

int H, W, sum;
vector<vector<char> > v(100, vector<char>(100));
int DX[4] = {1, 0, -1, 0};
int DY[4] = {0, 1, 0, -1};

void dfs(int n, int m) {
    char key = v[n][m];
    v[n][m] = 0;
    for(int i = 0; i < 4; ++i) {
        int dx = DX[i];
        int dy = DY[i];
        if(m + dx >= 0 && m + dx < W && n + dy >= 0 && n + dy < H && v[n + dy][m + dx] == key ) {
            dfs(n + dy, m + dx);
        }
    }
}

int main() {
    while(true) {
        sum = 0;
        cin >> H >> W;
        if(H == 0 && W == 0) break;
        REP(i, H) {
            REP(j, W) {
                cin >> v[i][j];
            }
        }
        REP(i, H) {
            REP(j, W) {
                if(v[i][j] != 0) {
                    ++sum;
                    dfs(i, j);
                }
            }
        }
        cout << sum << endl;
    }
}