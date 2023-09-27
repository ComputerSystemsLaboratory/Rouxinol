#include <stdio.h>
int main(){
    int a[100] = {0};
    int i;
    int x;
    
    for(i=1;i<=28;i++){
        scanf("%d\n",&x);
        a[x] = 1;
    }
    for(i=1;i<=30;i++){
        if(x==-1&&a[i] == 0){
            printf("%d\n",i);
            break;
        }
        else if(a[i] == 0){
            printf("%d\n",i);
            x = -1;
        }
    }
    return 0;
}