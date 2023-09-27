#include <cstdio>
#include <algorithm>

using namespace std;

char dp1[1000001],dp2[1000001];

int main(){
    int t[181];
    
    for(int i = 1;i <= 180;++i)
        t[i] = i * (i + 1) * (i + 2) / 6;
    
    dp1[0] = dp2[0] = 0;
    
    for(int i = 1;i <= 1000000;++i)
        dp1[i] = dp2[i] = 40;
    
    for(int i = 1;i <= 180;++i){
        int x = t[i];
        
        for(int j = x;j <= 1000000;++j)
            if(1 + dp1[j - x] < dp1[j]) dp1[j] = 1 + dp1[j - x];
    }
    
    for(int i = 1;i <= 180;++i){
        int x = t[i];
        
        if(x & 1)
            for(int j = x;j <= 1000000;++j)
                if(1 + dp2[j - x] < dp2[j]) dp2[j] = 1 + dp2[j - x];
    }
    
    int n;
    
    while(true){
        scanf("%d",&n);
        
        if(n == 0) break;
        
        printf("%d %d\n",dp1[n],dp2[n]);
    }
    
    return 0;
}