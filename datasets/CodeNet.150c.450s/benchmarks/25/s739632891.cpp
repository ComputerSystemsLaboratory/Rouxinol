#include <stdio.h>
#include<string.h>
int main(void){
int a[150]={};
while(1){
    int x;
    x=getchar();
    
    if(x==-1)
    break;
    
    a[x]++;
}
for(int i=97;i<=122;i++){
    printf("%c : %d\n",i,a[i]+a[i-32]);
}


    return 0;
}