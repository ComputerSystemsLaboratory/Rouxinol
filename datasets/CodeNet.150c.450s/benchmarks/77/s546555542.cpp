#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int dy[128] = {0}, dx[128] = {0};
    
    dy['N'] = 1, dy['S'] = -1, dx['E'] = 1, dx['W'] = -1;
    
    while (scanf("%d", &n) && n){
        int mp[32][32] = {{0}};
        
        for (int i = 0; i < n; i++){
            int x, y;
            scanf("%d %d", &x, &y);
            mp[y][x]++;
        }
        
        int m;
        scanf("%d", &m);
        
        int cnt = 0;
        int ny = 10, nx = 10;
        for (int i = 0; i < m; i++){
            char c;
            int r;
            scanf(" %c %d", &c, &r);
            for (int j = 0; j < r; j++){
                ny += dy[c];
                nx += dx[c];
                if (mp[ny][nx]){
                    cnt++;
                    mp[ny][nx]--;
                }
            }
        }
        
        printf("%s\n", cnt == n ? "Yes" : "No");
    }
    
    return (0);
}