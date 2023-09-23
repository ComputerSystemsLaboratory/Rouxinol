#include<stdio.h>
using namespace std;

int f[50]={1,1};

void Fibonacci(){
    for(int i=2;i<45;i++) f[i]=f[i-1]+f[i-2];
}

int main(){
    Fibonacci();
    int n;
    scanf("%d",&n);
    printf("%d\n",f[n]);
    return 0;
}