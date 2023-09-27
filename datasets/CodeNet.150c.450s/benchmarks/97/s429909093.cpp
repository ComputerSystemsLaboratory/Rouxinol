#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

int art[401][401];
P square[201];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};
int main(void){
    int N, n, d;
    while(cin >> N && N) {
        rep(i, 401) rep(j, 401) art[i][j] = 0;
        square[0] = P(200, 200);
        art[200][200] = 1;
        int minx=200, miny=200, maxx=200, maxy=200;
        rep(i, N-1) {
            cin >> n >> d;
            int nx = square[n].first+dx[d];
            int ny = square[n].second+dy[d];
            square[i+1] = P(nx, ny);
            art[nx][ny] = 1;
            minx = min(minx, nx);
            maxx = max(maxx, nx);
            miny = min(miny, ny);
            maxy = max(maxy, ny);
        }
        cout << maxx-minx+1 << " " << maxy-miny+1 << endl;
    }
}