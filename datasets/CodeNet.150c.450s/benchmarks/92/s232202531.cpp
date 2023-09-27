#include<stdio.h>
int main(){
    int a,b,c=1;
    while(scanf("%d %d",&a,&b)!=EOF){
        c=0;
        for(int i=1;i<1000001;i=i*10){
            if((a+b)/i==0){
                break;
            }
            c++;
        }
        printf("%d\n",c);
    }
    return 0;
}