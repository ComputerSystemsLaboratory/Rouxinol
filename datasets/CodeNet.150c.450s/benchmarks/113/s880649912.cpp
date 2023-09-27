#include <stdio.h>
int main(){
    int i,x;
    for(i=1;;i++){
        scanf("%d",&x);
        if(x == 0){
            break;
        }
        else{
            printf("Case %d: %d\n",i,x);
        }
    }
    return 0;
}
