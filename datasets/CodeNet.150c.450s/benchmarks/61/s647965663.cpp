#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c, x;
    
    while (scanf("%d %d %d %d %d", &n, &a, &b, &c, &x) && n){
        int ctr = 0;
        
        for (int i = 0; i < n; i++){
            int y;
            scanf("%d", &y);
            
            while (ctr <= 10000){
                if (y == x){
                    if (i != n - 1){
                        x = (a * x + b) % c;
                        ctr++;
                    }
                    break;
                }
                x = (a * x + b) % c;
                ctr++;
            }
        }
        
        printf("%d\n", ctr <= 10000 ? ctr : -1);
    }
    
    return (0);
}