#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    while (scanf("%d", &n) && n){
        char prev[3] = "xy";
        char now[3];
        int ans = 0;
        
        for (int i = 0; i < n; i++){
            scanf("%s", now);
            if (now[0] != prev[0] && now[1] == prev[1]) ans++;
            strcpy(prev, now);
        }
        printf("%d\n", ans);
    }
    
    return (0);
}