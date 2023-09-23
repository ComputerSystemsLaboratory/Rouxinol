#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    int a[15000] = {0};
    while(scanf("%d",&n),n){
    int ans = 0;
    a[0] = 1;
    a[1] = 1;
    a[2] = 2;
    for(int i = 3;i <= n; i++){
        a[i] = a[i-1] + a[i-2] + a[i-3];
    }
    ans = a[n]/3650;
    printf("%d\n",ans+1);
    }
    return 0;
}