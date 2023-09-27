#include <stdio.h>

int main(void)
{
    int x, y;

    while(1) {
        scanf("%d", &x);
        if(x == 0) break;
        y = 1000-x;
        int cnt[6] = {0};
    
        while(y > 0) {
            if(y >= 500) {
                y -= 500;
                cnt[0]++;
            } else if(y >= 100) {
                y -= 100;
                cnt[1]++;
            } else if(y >= 50) {
                y -= 50;
                cnt[2]++;
            } else if(y >= 10) {
                y -= 10;
                cnt[3]++;
            } else if(y >= 5) {
                y -= 5;
                cnt[4]++;
            } else if(y >= 1) {
                y -= 1;
                cnt[5]++;
            } else {
                break;
            }
        }
    
        printf("%d\n", cnt[0]+cnt[1]+cnt[2]+cnt[3]+cnt[4]+cnt[5]);
    }

    return (0);
}