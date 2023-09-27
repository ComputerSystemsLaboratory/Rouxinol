#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<string>
#include<utility>
#include<algorithm>
#include<stack>
#include<queue>

#define numof(array) (sizeof (array) / sizeof *(array))
using namespace std;

static const int dx[] = {1, 0, -1, 0};
static const int dy[] = {0, 1, 0, -1};

#define MAX_X 100
#define MAX_Y 100

int H, W;
char field[MAX_Y][MAX_X];

void dfs(const int x, const int y, const char fruit_now)//現在位置(x,y) つながっているところを全部'.'にする
{
    field[y][x] = '.';

    for (int i = 0; i < 4; i++) {
        //移動後の座標
        int x_new = x + dx[i];
        int y_new = y + dy[i];
        
        if (0 <= x_new && x_new < W && 0 <= y_new && y_new < H && field[y_new][x_new] == fruit_now) dfs(x_new, y_new, fruit_now);

    }
}
               
int main(void)
{
    while (true) {
        cin >> H >> W;
    
        if (H == 0 && W == 0) break;

        int cnt = 0;
        for (int j = 0; j < MAX_Y; j++) {
            for (int i = 0; i < MAX_X; i++) {
                field[j][i] = '.';//初期化
            }
        }

        for (int y = 0; y < H; y++) {
            for (int x = 0; x < W; x++) {
                scanf(" %c ", &field[y][x]);//入力
            }
        
        }   

        for (int y = 0; y < H; y++) {
            for (int x = 0; x < W; x++) {
                if (field[y][x] != '.') {
                    dfs(x, y, field[y][x]);
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }
	return 0;
}