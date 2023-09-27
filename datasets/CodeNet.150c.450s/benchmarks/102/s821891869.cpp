#include <iostream>

using namespace std;

int W,H;
int posW, posH;
const int dx[]={1,0,-1,0}, dy[]={0,-1,0,1};
bool tiles[21][21] = {};
bool v_tiles[21][21] = {};

void dfs(int x, int y) {
    if (!(0 <= x && x <= W-1 && 0 <= y && y <= H-1) || v_tiles[x][y] == true || tiles[x][y] == true)
        return;

    v_tiles[x][y] = true;
    for (int i = 0; i < 4; i++) {
        dfs(x+dx[i], y+dy[i]);
    }
}

int main() {
    while (cin>>W>>H && W != 0 && H != 0) {
        for (int h = 0; h < H; h++) {
            for (int w = 0; w < W; w++) {
                v_tiles[w][h] = false;
                char tile;
                cin>>tile;
                switch (tile) {
                    case '.':
                        tiles[w][h] = false;
                        break;

                    case '#':
                        tiles[w][h] = true;
                        break;

                    case '@':
                        tiles[w][h] = false;
                        posW = w;
                        posH = h;
                        break;
                }
            }
        }

        dfs(posW, posH);

        int count = 0;
        for (int h = 0; h < H; h++) {
            for (int w = 0; w < W; w++) {
                if (v_tiles[w][h] == true) count++;
            }
        }
        cout<<count<<endl;;
    }
}