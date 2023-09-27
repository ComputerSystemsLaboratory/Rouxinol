#include <stdio.h>
int main(){
    char p[101],x[202];
    for(int i=0;i<101;i++)
        p[i]=x[i]='\0';
    int m=0,n=0;
    bool f;
    scanf("%s",x);
    scanf("%s",p);
    while(x[m]!='\0')m++;
    while(p[n]!='\0')n++;
    for(int i=m;i<m*2;i++){
        x[i]=x[i-m];
    }
    for(int i=0;i<m;i++){
        f=true;
        for(int j=0;j<n&&f;j++){
            if(p[j]!=x[j+i])f=false;
               }
               if(f){
                   printf("Yes\n");
                   return 0;
               }
               }
               printf("No\n");
               }