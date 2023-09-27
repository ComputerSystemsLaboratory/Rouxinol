#include <bits/stdc++.h>
#define pi 3.14159
using namespace std;
typedef long long LL;
const LL MOD = 1e9 + 7;
const int N = 1e5 + 7, M = 1e7, OO = 0x3f3f3f3f;
#define AC ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); cin.sync_with_stdio(0);
int main()
{
map<int,int>mp;
int counter=0,i,j,n;
scanf("%d",&n);
for(i=1;i<106;++i){
    for(int j=1;j<106;++j){
        for(int k=1;k<106;++k){
            mp[(i*i)+(j*j)+(k*k)+(i*j)+(i*k)+(j*k)]+=1;
        }
    }
}
for(i=1;i<=n;++i){
    printf("%d\n",mp[i]);
}


    return 0;
}
