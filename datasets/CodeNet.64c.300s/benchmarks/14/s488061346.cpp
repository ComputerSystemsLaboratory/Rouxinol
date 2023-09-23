#include <stdio.h>

int main(){
    int d1,d2;
    scanf("%d %d" , &d1,&d2);
    
    if(d1 < d2){
    printf("a < b\n");
    }else if(d1 > d2){
    printf("a > b\n");
    }else{
    printf("a == b\n");
    }

    return 0;
}
