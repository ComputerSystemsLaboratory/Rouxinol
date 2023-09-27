#include <bits/stdc++.h>
using namespace std;

bitset<10000> maze[10];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int r, c;
    while(cin >> r >> c, (r && c)){
        for(int i = 0; i < r; ++i)
            for(int j = 0; j < c; ++j){
                bool tmp;
                cin >> tmp;
                maze[i][j] = tmp;
            }
        int time = 1 << r;
        int ans = 0;
        for(int i = 0; i < time; ++i){
            for(int j = 0; j < r; ++j)
                if(i & (1 << j))
                    maze[j].flip();
            int result = 0;
            for(int C = 0; C < c; ++C){
                int cntpercol = 0;
                for(int R = 0; R < r; ++R)
                    if(maze[R][C])
                        ++cntpercol;
                result += max(cntpercol, r - cntpercol);
            }
            ans = max(ans, result);
            for(int j = 0; j < r; ++j)
                if(i & (1 << j))
                    maze[j].flip();
        }
        cout << ans << endl;
    }
    return 0;
}