#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, s;
    
    while (scanf("%d %d %d", &x, &y, &s) && s){
        int ans = 0;
        for (int a = 1; a <= s - 1; a++){
            for (int b = 1; b <= s - 1; b++){
                if (a * (100 + x) / 100 + b * (100 + x) / 100 == s){
                    ans = max(ans, a * (100 + y) / 100 + b * (100 + y) / 100);
                }
            }
        }
        
        printf("%d\n", ans);
    }
    
    return (0);
}