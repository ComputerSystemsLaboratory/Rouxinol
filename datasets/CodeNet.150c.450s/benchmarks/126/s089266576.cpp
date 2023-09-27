#include <stdio.h>

int ng[16][16];

int rec(int x, int y){
    if(ng[x][y]) return 0; //工事中なら0
    if(x == 0 && y == 0) return 1; //スタート地点なら1
    if(x == 0) return rec(0, y-1);
    if(y == 0) return rec(x-1, 0);
    return rec(x-1, y) + rec(x, y-1);
}

int main(void){
    int h, w, n, x, y, a, b;
    // && は and, || は or
    while(scanf("%d%d", &h, &w) && (h||w)){ // h, wがともに0なら終了
        h--; w--; // デクリメント(1減らす)
        // 配列を初期化
        for(x = 0; x <= h; x++){
            for(y = 0; y <= w; y++){
                ng[x][y] = 0;
            }
        }
        scanf("%d", &n);
        // 工事中の場所の入力をとり、そこを記録する
        for(x = 0; x < n; x++){
            scanf("%d%d", &a, &b);
            ng[a-1][b-1] = 1;
        }
        printf("%d\n", rec(h, w));
    }
    return 0;
}