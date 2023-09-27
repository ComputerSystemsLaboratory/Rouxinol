#include<cstdio>
#include<iostream>
int main(void){
    int d,sum;
    while(scanf("%d",&d)!=EOF){
    sum=0;
    for(int i=d;i<600;i+=d){
        sum+=i*i*d;
    }
    printf("%d\n",sum);
    }
    return 0;
}