#include<stdio.h>
int main(){
    int i;
    int k=0;
    int x[2000];
    int sum[1000]={0}; 
    do{
        int l=0;
        for( ; ; ){
            if((x[l++]=getchar())=='\n')break;
            x[l-1]=x[l-1]-'0';
            sum[k]+=x[l-1];
        }
        k++;
        //for(i=0; i<l; i++)printf("xxx%d", x[i]);
        //printf("\n");
    }while(x[0]!=0);
    for(i=0; i<k-1; i++)printf("%d\n",sum[i]);
    return 0;
}