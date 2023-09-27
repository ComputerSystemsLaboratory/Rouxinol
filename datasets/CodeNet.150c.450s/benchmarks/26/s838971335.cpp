#include <cstdio>

int main(void){
    int a=0,b=0;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==b){
        printf("a == b\n");
    }
    else if(a<b){
        printf("a < b\n");
    }
    else{
        printf("a > b\n");
    }
    return 0;
}
