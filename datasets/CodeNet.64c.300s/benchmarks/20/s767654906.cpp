#include <stdio.h>

int main(){
    int d,s;
    int i;
    while(scanf("%d",&d)!=EOF){
        s = 0;
        for(i=1;d*i<600;i++){
            s += d*(d*i)*(d*i);
        }
        printf("%d\n",s);
    }
}