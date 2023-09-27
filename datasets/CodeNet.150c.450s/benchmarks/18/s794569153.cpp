#include<stdio.h>
 
int main(){
    int  s=100000;
 
    int n;
    scanf("%d",&n);
 
 
    for(;n--;){
        if(int(s*1.05)%1000==0){
            s=int(s*1.05);
        }else{
            s= int(s*1.05) + (1000- int(s*1.05) % 1000);
        }
    }
    printf("%d\n",s);
 
    return 0;
}