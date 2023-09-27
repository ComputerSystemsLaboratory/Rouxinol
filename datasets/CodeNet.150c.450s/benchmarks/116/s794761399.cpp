#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

typedef long long ll;

using namespace std;

int solve(int n,int k){
    int a[100000];
    ll sum=0,ans=0;
    
    
    
    for(int i=0;i<k;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    
    ans=sum;
    
    for(int i=k;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i]-a[i-k];
        ans=max(ans,sum);
    }
    
    printf("%lld\n",ans);
    
    return 0;
}

int main(){
    int n,k;
    
    while(1){
        scanf("%d%d",&n,&k);
        if(n+k==0)
            break;
        solve(n,k);
    }
    
    return 0;
}