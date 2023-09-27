#include <stdio.h>

int main(){
    int a,b,c;
    int s = 0;
    scanf("%d %d %d",&a,&b,&c);
    for(int i = a;i <= b;i++){
        if(c % i == 0){
            s++;
        }
        else continue;
    }
    printf("%d\n",s);
    return 0;
}
