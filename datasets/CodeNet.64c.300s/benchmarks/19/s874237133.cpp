#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
typedef long long ll;

#define PI 3.141592653

int main(){
    int n;
    
    while(1){
        int sum[5002],ans=-200000000,a;
        scanf("%d",&n);
        
        if(n==0) break;
        
        sum[0]=0;
        sum[1]=0;
        
        for(int i=1;i<=n;i++){
            scanf("%d",&a);
            
            sum[i]+=a;
            sum[i+1]=sum[i];
            
            for(int j=0;j<i;j++){
                ans=max(ans,sum[i]-sum[j]);
            }
        }
        
        printf("%d\n",ans);
    }
    
    return 0;
}