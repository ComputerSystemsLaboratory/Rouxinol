#include <stdio.h>
#include<string.h>
int main(void){
while(1){
    char a[1001];
    scanf("%s",a);
    if(a[0]=='0')
    break;
    
    int i=0,j;
    for(j=0;j<strlen(a);j++){
        i+=(int)a[j];
        i-=48;
    }
    printf("%d\n",i);
}


    return 0;
}