#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#define MAX 1000000
typedef long long int ll;

using namespace std;

bool isprime[MAX];
int prime[MAX];

void sieve()
{
    isprime[1]=1;
    for(int i=2;i<=sqrt(MAX);i++){
        if(!isprime[i]){
            for(int j=i*i;j<=MAX;j+=i){
                isprime[j]=true;
            }
        }
    }
    int count=0;
    for(int k=1;k<=MAX;k++){
        if(!isprime[k])prime[k]=++count;
        else prime[k]=count;
    }
}

int main()
{
    sieve();
    int n;
    while(scanf("%d",&n)==1){
        printf("%d\n",prime[n]);
    }
    return 0;
}