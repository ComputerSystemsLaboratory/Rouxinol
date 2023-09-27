#include <bits/stdc++.h>
using namespace std;

#define rep(i,j) for (int (i)=0;(i)<(int)(j);++(i))

int N, M;
int squ[21][21];

void init() {
    rep(i, 21) rep(j, 21) squ[i][j] = 0;
}

bool chk() {
    rep(i, 21) rep(j, 21) if (squ[i][j]) return false;
    return true;
}

int main() {
    while (cin >> N, N) {
        init();
        rep(i, N) {
            int x, y; cin >> x >> y;
            squ[x][y] = 1;
        }
        cin >> M;
        int posx = 10, posy = 10;
        rep(i, M) {
            char h; int v; bool ns = 0, ew = 0;
            cin >> h >> v;
            switch (h) {
                case 'N': ns = 1;
                case 'S':
                    rep(j, v) {
                        posy += (ns) ? 1 : -1;
                        squ[posx][posy] = 0;
                    }
                    break;
                case 'E': ew = 1;
                case 'W':
                    rep(j, v) {
                        posx += (ew) ? 1 : -1;
                        squ[posx][posy] = 0;
                    }
                    break;
            }
        }
        if (chk()) puts("Yes");
        else puts("No");
    }
}