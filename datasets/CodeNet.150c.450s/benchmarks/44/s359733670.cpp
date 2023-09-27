#include <stdio.h>
int main(){
    int a[4],b[4],x,y;
    while(scanf("%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&b[0],&b[1],&b[2],&b[3])!=EOF){
        x=y=0;
        for(int i=0;i<4;i++){
            if(a[i]==b[i])x++;
            else if(a[i]==b[(i+1)%4]||a[i]==b[(i+2)%4]||a[i]==b[(i+3)%4])y++;
            
        }
        printf("%d %d\n",x,y);
    }}