#include <stdio.h>
int main(void) {
    int i,y,x[100];
    scanf("%d", &y);
    for(i=0; i<y; i++){
        scanf("%d", &x[i]);
    }
    for(i=y-1; i>=0; i--){
        if(i != y-1){
            printf(" ");
        }
        printf("%d", x[i]);
    }
    puts("");
    return 0;
}
