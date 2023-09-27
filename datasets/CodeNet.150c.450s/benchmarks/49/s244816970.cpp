#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

int main(){
    int n;
    while(1){
        scanf("%d",&n);
        if(n==0)break;
        int sum=0,max=0,min=1000,point;
        for(int i=1;i<=n;i++){
            scanf("%d",&point);
            if(point>max) max=point;
            if(point<min) min=point;
            sum+=point;
        }
        printf("%d\n",(sum-max-min)/(n-2));
    }
    return 0;
}