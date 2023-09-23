#include "cstdio"

int main (){
    int i,x;
    scanf("%d",&i);
    for(int j=1;j<=i;j++){
        x=j;
        if(!(x%3)) {
            printf(" %d",j);
            continue;
        }else{
            while(x){
                if(x%10 == 3){
                  printf(" %d",j);
                  break;
                }
                x/=10;
            }
        }
    }
    printf("\n");
}