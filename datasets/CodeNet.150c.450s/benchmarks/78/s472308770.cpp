#include <bits/stdc++.h>

using namespace std;

int dp1[1000001], dp2[1000001];

int main()
{
    fill(dp1, dp1 + 1000001, 1000000000);
    fill(dp2, dp2 + 1000001, 1000000000);
    
    dp1[0] = dp2[0] = 0;
    
    for (int i = 1; i * (i + 1) * (i + 2) <= 6000000; i++){
        int s = i * (i + 1) * (i + 2) / 6;
        
        if (s & 1){
            for (int j = 0; j + s <= 1000000; j++){
                dp2[j + s] = min(dp2[j + s], dp2[j] + 1);
            }
        }
        for (int j = 0; j + s <= 1000000; j++){
            dp1[j + s] = min(dp1[j + s], dp1[j] + 1);
        }
    }
    
    int n;
    
    while (scanf("%d", &n) && n){
        printf("%d %d\n", dp1[n], dp2[n]);
    }
    
    return (0);
}