#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);

    int a=100000;

    while(n--){
        a+=a/20;
        a=a/1000*1000+(a%1000!=0?1000:0);
    }
    printf("%d\n",a);

    return 0;
}