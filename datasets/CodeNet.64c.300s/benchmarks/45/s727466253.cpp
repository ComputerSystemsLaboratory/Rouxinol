#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, p;
    
    while (scanf("%d %d %d", &n, &m, &p) && n){
        int s = 0, t = 0;
        
        for (int i = 1; i <= n; i++){
            int x;
            scanf("%d", &x);
            s += x;
            if (i == m) t = x;
        }
        
        printf("%d\n", t == 0 ? 0 : (s * 100 * (100 - p)) / (100 * t));
    }
    
    return (0);
}