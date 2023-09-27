#include <stdio.h>

int main(void){
    int x;

    scanf("%d",&x);
    
    int y = x;
    for(int i = 0; i < 2 ; i++){
        y = y * x;
    }
    printf("%d\n",y);
    
    return 0;    
}