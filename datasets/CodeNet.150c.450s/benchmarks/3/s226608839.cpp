#include <stdio.h>
#include<string.h>
int main(void){
    char a[1001],b[1001];
    int n,i,j;
    scanf("%s%d",a,&n);
    
    for(i=0;i<n;i++){
        char x[10];
        int y,z;
        scanf("%s%d%d",x,&y,&z);
        if(x[2]=='i'){
            for(j=y;j<=z;j++)
            printf("%c",a[j]);
            
            printf("\n");
        }else if(x[2]=='v'){
            strcpy(b,a);
            for(j=y;j<=z;j++){
                a[j]=b[z-j+y];
            }
        }else{
            char p[z-y+2];
            scanf("%s",p);
            for(j=y;j<=z;j++){
                a[j]=p[j-y];
            }
        }
    }
    return 0;
}