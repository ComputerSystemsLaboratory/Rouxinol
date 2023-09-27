#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    
    while (scanf("%d %d", &n, &m) && n){
        int s[256];
        int s1 = 0, s2 = 0;
        for (int i = 0; i < n; i++){
            scanf("%d", &s[i]);
            s1 += s[i];
        }
        for (int i = 0; i < m; i++){
            scanf("%d", &s[n + i]);
            s2 += s[n + i];
        }
        
        int p1 = -1, p2 = -1, minsum = 99999;
        for (int i = 0; i < n; i++){
            for (int j = n; j < m + n; j++){
                if (s1 - s[i] + s[j] == s2 - s[j] + s[i] && s[i] + s[j] < minsum){
                    p1 = s[i];
                    p2 = s[j];
                    minsum = s[i] + s[j];
                }
            }
        }
        
        if (~p1) printf("%d %d\n", p1, p2);
        else printf("-1\n");
    }
    return (0);
}