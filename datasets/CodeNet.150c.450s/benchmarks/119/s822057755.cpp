// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1160&lang=jp
// ????????¶????????£???????????????????????????????????°???????????£?????????
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
int w, h, cnt;
int c[100][100], m[100][100];
int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int main() {
    while(scanf("%d%d",&w,&h)) {
        if (w==0&&h==0) break;
        memset(m, -1, sizeof(m)); cnt = 0;
        for (int i=0; i<h; i++) for (int j=0; j<w; j++) scanf("%d",&c[i][j]);
        for (int i=0; i<h; i++) for (int j=0; j<w; j++) {
            if (m[i][j] == -1 && c[i][j] == 1) {
                cnt++;
                queue<P> q;
                q.push(P(i,j));
                m[i][j] = 0;
                while(!q.empty()) {
                    P p = q.front(); q.pop();
                    for (int k=0; k<8; k++) {
                        int ny = p.first + dy[k];
                        int nx = p.second + dx[k];
                        if (nx >= 0 && nx < w && ny >= 0 && ny < h && m[ny][nx] == -1 && c[ny][nx] == 1) {
                            m[ny][nx] = 0;
                            q.push(P(ny,nx));
                        }
                    }
                }
            }
        }
        printf("%d\n",cnt);
    }
}