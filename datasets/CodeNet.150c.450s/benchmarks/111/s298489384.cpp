#include<cstdio>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>
#include<iostream>
#include<sstream>
using namespace std;
typedef long long ll;

int ko,n;
ll ans=0;
int main(){
    scanf("%d",&n);
    vector<int> ar(n-1);
    for(int i=0;i<n-1;i++)scanf("%d",&ar[i]);
    scanf("%d",&ko);
    vector<vector<ll> > comar(n-1,vector<ll>(20+1,0));
    comar[0][ar[0]]=1;
    for(int i=1;i<n-1;i++){
        for(int j=0;j<=20;j++){
            if(j+ar[i]<=20)comar[i][j+ar[i]]+=comar[i-1][j];
            if(j-ar[i]>=0)comar[i][j-ar[i]]+=comar[i-1][j];
        }
    }
    printf("%lld\n",comar[n-2][ko]);
}