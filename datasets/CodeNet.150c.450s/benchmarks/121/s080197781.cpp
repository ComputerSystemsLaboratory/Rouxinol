#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
#define rep(i, n) for(int i=0; i<(n); ++i)
 
int H, W, size;
char map[101][101];
void dfs(int i, int j) {
    char c = map[i][j];
    map[i][j] = '.';
    if(j+1<W && map[i][j+1]==c) dfs(i, j+1);
    if(j>0 && map[i][j-1]==c) dfs(i, j-1);
    if(i+1<H && map[i+1][j]==c) dfs(i+1, j);
    if(i>0 && map[i-1][j]==c) dfs(i-1, j);
}
int main() {
    while(cin >> H >> W && H!=0 && W!=0) {
        rep(i, H) {
            rep(j, W) {
                cin >> map[i][j];
            }
        }
        bool isFinished = false;
        size = 0;
        while(isFinished==false) {
            isFinished = true;
            rep(i, H) {
                rep(j, W) {
                    if(map[i][j]!='.') {
                        ++size;
                        dfs(i, j);
                        isFinished = false;
                    }
                }
            }
        }
        cout << size << endl;
        }
    return 0;
}