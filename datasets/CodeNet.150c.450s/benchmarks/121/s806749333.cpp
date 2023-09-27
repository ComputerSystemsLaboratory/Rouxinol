#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>


#define MOD 1000000007
#define INTMAX 0x7fffffff
#define INTMIN 0x80000000
#define LLMAX 0x7fffffffffffffffLL
#define LLMIN 0x8000000000000000LL

#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

#define RINGO '@'
#define KAKI '#'
#define MIKAN '*'
#define CHECKED 'C'

using namespace std;
using ll = long long;

int H,W;
int map[100][100];

void dfs(int h, int w, int c){
    if (h < 0 || h >= H || w < 0 || w >= W)
        return;
    if (map[h][w] == CHECKED || map[h][w] != c) {
        return;
    }
    map[h][w] = CHECKED;

    dfs(h + 1, w, c);
    dfs(h, w + 1, c);
    dfs(h - 1, w, c);
    dfs(h, w - 1, c);
}

int main(){
    while (1) {
        cin >> H >> W;
        if (H == 0 && W == 0){
            break;
        }

        char c;
        rep(i, H) {
            rep(j, W) {
                cin >> c;
                map[i][j] = c;
            }
        }
        int n = 0;
        rep(i, H) {
            rep(j, W) {
                if (map[i][j] != CHECKED){
                    dfs(i, j, map[i][j]);
                    ++n;
                }
            }
        }
        cout << n << endl;
    }
}