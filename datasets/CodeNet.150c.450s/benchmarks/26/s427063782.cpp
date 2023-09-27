#include <stdio.h>
int main(void){
    // Your code here! scanf("%d %d",&a,&b);
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b){
        printf("a < b\n");
    }else if(a>b){
        printf("a > b\n");
    }else{
        printf("a == b\n");
    }
    
}
