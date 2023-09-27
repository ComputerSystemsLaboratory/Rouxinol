#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

#define maxn 999999 + 5
typedef long long ll;

int prime[maxn];

void init(){
    for(int i=2;i<maxn-4;i++)
        prime[i] = i % 2;
    prime[2]=1;
    prime[1]=0;
    for(int i=2;i*i<=maxn;i++){
        if(!prime[i])continue;
        for(int j=i;j*i<=maxn;j++)
            prime[i*j]=0;
    }
    for(int i=2;i<=maxn;i++)
        prime[i] += prime[i-1];
}
int main(){
    int n;
    init();
    
    while(~scanf("%d",&n))
        printf("%d\n",prime[n]);
    return 0;
}