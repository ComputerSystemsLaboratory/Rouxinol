#include <cstdio>

int main(void){
    
    int a=0,b=0,c=0;
    scanf("%d%d%d",&a,&b,&c);
    if((a<b)&&(b<c)){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
