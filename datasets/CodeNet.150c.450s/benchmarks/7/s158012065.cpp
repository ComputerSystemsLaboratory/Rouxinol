#include<stdio.h>
int height[10002];
int main(void){
    int h;
    for(int i = 0;i < 10;i++){
        scanf("%d",&h);
        height[h]++;
    }
    int cnt = 0;
    for(int i = 10000;i >= 0;i--){
        if(height[i] > 0){
            printf("%d\n",i);
            height[i]--;
            i++;
            if(++cnt >= 3) break;
        }
    }
    return 0;
}