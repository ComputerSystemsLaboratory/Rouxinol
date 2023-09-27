#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    while (scanf("%d", &n) && n){
        int blk[16][8];
        int ch[16][8];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < 5; j++){
                scanf("%d", &blk[i][j]);
            }
        }
        
        int tot = 0;
        bool upd;
        
        do {
            upd = 0;
            memset(ch, 0, sizeof(ch));
            for (int i = 0; i < n; i++){
                for (int j = 0; j < 3; j++){
                    if (!blk[i][j]) continue;
                    if (blk[i][j] == blk[i][j + 1] && blk[i][j] == blk[i][j + 2]){
                        ch[i][j] = ch[i][j + 1] = ch[i][j + 2] = 1;
                        upd = true;
                    }
                }
            }
            int btm[8] = {0};
            for (int i = n - 1; i >= 0; i--){
                for (int j = 0; j < 5; j++){
                    tot += blk[i][j] * ch[i][j];
                    if (!ch[i][j]) blk[n - ++btm[j]][j] = blk[i][j];
                }
            }
            for (int i = 0; i < 5; i++){
                for (int j = 0; j < n - btm[i]; j++) blk[j][i] = 0;
            }
        } while (upd);
        
        printf("%d\n", tot);
    }
    
    return (0);
}