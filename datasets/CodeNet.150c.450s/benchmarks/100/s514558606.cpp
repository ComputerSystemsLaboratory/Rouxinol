#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define f(i,n) for(i=1; i<=n;i++)
int main(){
    long long s=1,n,i,a,b,k;
    char c;
    scanf("%lld", &n);
    f(i,n)
        s=s*i;                   
    printf("%lld", s);
    cout<<endl;
    return 0;
}