#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    int a[2048], b[2048];
    static int ca[1500 * 1000 + 1], cb[1500 * 1000 + 1];
    
    while (scanf("%d %d", &n, &m) && n){
        
        memset(ca, 0, sizeof(ca));
        memset(cb, 0, sizeof(cb));
        
        for (int i = 0; i < n; i++){
            scanf("%d", a + i);
            if (i) a[i] += a[i - 1];
            for (int j = 0; j <= i; j++){
                int s = a[i] - (j ? a[j - 1] : 0);
                ca[s]++;
            }
        }
        
        for (int i = 0; i < m; i++){
            scanf("%d", b + i);
            if (i) b[i] += b[i - 1];
            for (int j = 0; j <= i; j++){
                int s = b[i] - (j ? b[j - 1] : 0);
                cb[s]++;
            }
        }
        
        long long res = 0;
        
        for (int i = 1; i <= 1500 * 1000; i++){
            res += (long long)ca[i] * cb[i];
        }
        
        printf("%lld\n", res);
    }
    
    return (0);
}