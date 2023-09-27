#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); ++i)
const int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};

int main(){
    int N;
    while(cin >> N, N){
        vector<vector<bool> > c(21, vector<bool>(21));
        rep(i, N){
            int x, y;
            cin >> x >> y;
            c[y][x] = true;
        }
        int M, x = 10, y = 10;
        cin >> M;
        while(M--){
            char d; int l;
            cin >> d >> l;
            rep(i, 4)if("SWNE"[i] == d){
                while(l--){
                    x += dx[i]; y += dy[i];
                    if(!c[x][y])continue;
                    c[x][y] = false;
                    N--;
                }
            }
        }
        cout << (N? "No\n": "Yes\n");
    }
    return 0;
}