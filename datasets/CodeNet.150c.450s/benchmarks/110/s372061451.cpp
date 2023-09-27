#include <iostream>
#include <ctype.h>
#include <queue>
#define INF 1000000
using namespace std;
 
int dx[4] = { 1, 0, -1, 0 }; //
int dy[4] = { 0, 1, 0, -1 };
int H, W, N, res;
int d[1000][1000];
char HW[1000][1000];
 
int bfs(int sH, int sW, int gH, int gW) {
    typedef pair <int, int> P;
    queue <P> Q;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) d[i][j] = INF;
    }
    Q.push(P(sH, sW));
    d[sH][sW] = 0;
 
    while (Q.size()) {
        P p = Q.front(); Q.pop();
        if (p.first == gH && p.second == gW) break;
        for (int i = 0; i < 4; i++) {
            int nH = p.first + dy[i], nW = p.second + dx[i];
            if (0 <= nW && nW <= W - 1 && 0 <= nH && nH <= H - 1 && HW[nH][nW] != 'X' && d[nH][nW] == INF) {
                Q.push(P(nH, nW));
                d[nH][nW] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gH][gW];
}
 
int main() {
    typedef pair <int, int> P;
    P num[10]; //
    cin >> H >> W >> N;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> HW[i][j];
            if (HW[i][j] == 'S') {
                num[0].first = i;
                num[0].second = j;
            }
            if (isdigit(HW[i][j])) {
                num[HW[i][j] - '0'].first = i;
                num[HW[i][j] - '0'].second = j;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        res += bfs(num[i].first, num[i].second, num[i + 1].first, num[i + 1].second);
    }
    cout << res << "\n";
    // for (int i = 0; i < N + 1; i++) cout << num[i].first << " " << num[i].second << "  ";
    
    // getchar(); getchar();
    return 0;
}