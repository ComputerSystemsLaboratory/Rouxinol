#include <bits/stdc++.h>
#define range(i, a, n) for(int (i) = (a); (i) < (n); (i)++)
#define rep(i, n) for(int (i) = 0; (i) < (n); (i)++)
using namespace std;

int h, w;
string field[100];

int dx[] = { 1, 0,-1, 0};
int dy[] = { 0,-1, 0, 1};

void dfs(int y, int x, char mark){
    field[y][x] = '-';

    for(int i = 0; i < 4; i++){
        int yy = y + dy[i];
        int xx = x + dx[i];
        if(yy < 0 || h <= yy ||
           xx < 0 || w <= xx || 
           field[yy][xx] != mark) continue;

        dfs(yy, xx, mark);
    }
}

int main(void){
    while(1){
        cin >> h >> w;
        if(h == 0 && w == 0) break;

        for(int y = 0; y < h; y++){
            cin >> field[y];
        }

        int res = 0;
        for(int y = 0; y < h; y++){
            for(int x = 0; x < w; x++){
                if(field[y][x] != '-'){
                    dfs(y, x, field[y][x]);
                    res++;
                }
            }
        }

        cout << res << endl;
    }

	return 0;
}