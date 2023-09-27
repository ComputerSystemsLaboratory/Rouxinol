#include<stdio.h>

#define MAX 100
char farm[MAX][MAX];

void infection(int i, int j, int H, int W, char moji)
{
    if( farm[i][j] == moji ){
        farm[i][j] = '+';
        if( j + 1 < W ) infection(i, j + 1, H, W, moji);
        if( i + 1 < H ) infection(i + 1, j, H, W, moji);
        if( j - 1 >= 0 )infection(i, j - 1, H, W, moji);
        if( i - 1 >= 0 )infection(i - 1, j, H, W, moji);
    }
}

int main()
{
    int H, W, i, j, cnt;
    while(1){
        cnt = 0;
        scanf("%d %d", &H, &W);
        if(H == 0 && W == 0) break;

        for(i = 0; i < H; i++){
            scanf("%s", farm[i]);
        }
        for(i = 0; i < H; i++ ){
            for(j = 0; j < W; j++){
                if(farm[i][j] == '+') continue;
                cnt++;
                infection(i, j, H, W, farm[i][j]);
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}