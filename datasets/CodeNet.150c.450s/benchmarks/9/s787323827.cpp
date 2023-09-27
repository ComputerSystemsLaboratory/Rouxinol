#include <stdio.h>
#include<string.h>
int main(void){
while(1){
    char a[201],b[201];
    scanf("%s",a);
    
    if(a[0]=='-')
    break;
    
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        
        strcpy(b,a);
        
        for(j=x;j<strlen(a)+x;j++){
            a[j-x]=b[j%strlen(a)];
        }
        
    }
    printf("%s\n",a);
    
}
    return 0;
}