#include<cstdio>
#include<iostream>
#include<queue>
#include<stack>
#define MAX_N 100000000

using namespace std;

int main(){
    int num[31]={0};
    int i;
    int a;
    for(int i=1;i<=28;i++){
        scanf("%d",&a);
        num[a]=1;
    }
    for(int i=1;i<=30;i++){
        if(num[i]==0){
            printf("%d\n",i);
        }
    }
}