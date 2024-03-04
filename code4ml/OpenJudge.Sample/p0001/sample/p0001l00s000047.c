#include<stdio.h>

int main(){
    int a,b,c=0,i=1,j=0,k=0,set[200]={};
    
    while(scanf("%d %d",&a,&b)!=EOF){
        while(!(1<=c&&c<=9)){
            c=(a+b)/i;
            i=i*10;
            j++;
        }
        set[k]=j;
        k++;
        j=c=0;
        i=1;
    }
    
    for(i=0;i<k;i++){
        printf("%d\n",set[i]);
    }
    
    return 0;
}