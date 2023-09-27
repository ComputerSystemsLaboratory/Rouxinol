#include <iostream>

using namespace std;

const int MAX_N = 110;
int height, width;
char field[MAX_N][MAX_N];
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};

inline bool VALID_POS(int x, int y) {
    return ( x >= 0 && x < width && y >= 0 && y < height);
}

void dfs(int x, int y, char fruit)
{
    field[y][x] = ' ';

    for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        // ??°?????????
        if (!VALID_POS(nx, ny) || field[ny][nx] != fruit) continue;
            
        field[ny][nx] = ' ';
        dfs(nx, ny, fruit);
    }  
}


int solve() {
    int ref = 0;

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            // ??°?????????
            if (field[y][x] == ' ') continue;

            dfs(x, y, field[y][x]);
            ref++;
        }
    }

    return ref;
}


int main()
{
    
    while (cin >> height >> width) {
        if (height == 0 && width == 0) break;

        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                cin >> field[y][x];
            }
        }

        int ans = solve();

        cout << ans << endl;
    }

    return 0;
}