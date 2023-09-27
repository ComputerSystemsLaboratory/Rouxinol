#include <stdio.h>

int main(){
    int a[4];
    int b[4];
    int used[10];
    int hits, blows;
    
    while (scanf("%d %d %d %d",&a[0], &a[1], &a[2], &a[3]) != EOF){
        scanf("%d %d %d %d",&b[0], &b[1], &b[2], &b[3]);
        hits = blows = 0;
        for (int i=0; i<10; i++) used[i]=0;
        for (int i=0; i<4; i++) used[a[i]]++;
        for (int i=0; i<4; i++){
            if (used[b[i]]){
                if (b[i] == a[i]) hits++;
                else blows++;
            }
        }
        printf("%d %d\n", hits, blows);
    }
    return 0;
}