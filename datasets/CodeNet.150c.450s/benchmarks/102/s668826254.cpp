#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<numeric>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define dump(a) (cerr << #a << "=" << (a) << endl)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;

using namespace std;

int W, H;
int sx, sy;
int ans;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
vector<vector<char>>  field;

bool is_out_of_range(int x, int y) {
    return x < 0 || x >= W || y < 0 || y >= H;
}

void dfs(int x, int y) {
    if (is_out_of_range(x, y)) return;
    if (field[y][x] == '#') return;

    field[y][x] = '#';
    ans++;

    for (int i = 0; i < 4; ++i) {
        dfs(x + dx[i], y + dy[i]);
    }
    return;
}

int main() {
	while(cin >> W >> H, W) {
        ans = 0;
        field.assign(H, vector<char>(W));
        for (int y = 0; y < H; ++y) {
            for (int x = 0; x < W; ++x) {
                cin >> field[y][x];
                if (field[y][x] == '@') {
                    sx = x; sy = y;
                }
            }
        }
    
        dfs(sx, sy);
        cout << ans << endl; 
	}
	return 0;
}