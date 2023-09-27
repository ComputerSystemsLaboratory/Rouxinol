#include<bits/stdc++.h>
#define REP(i,n) for(long long i=0;i<n;++i)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
using namespace std;
int main(){
    long long data[45];
    int n;
    data[0]=1;
    data[1]=1;
    scanf("%d",&n);
    FOR(i,2,n+1) data[i]=data[i-2]+data[i-1];
    printf("%lld\n",data[n]);
    return 0;
}


