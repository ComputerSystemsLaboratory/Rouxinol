#include <bits/stdc++.h>

using namespace std;

bool p[1000000];

int main()
{
    p[0] = p[1] = 1;
    
    for (int i = 4; i < 1000000; i += 2) p[i] = 1;
    
    for (int i = 3; i * i < 1000000; i += 2){
        if (!p[i]){
            for (int j = 3 * i; j < 1000000; j += i) p[j] = 1;
        }
    }
    
    int a, d, n;
    
    while (scanf("%d %d %d", &a, &d, &n) && a){
        int ct = 0;
        
        for (int i = a; ; i += d){
            if (!p[i]) ++ct;
            if (ct == n){
                printf("%d\n", i);
                break;
            }
        }
    }
    
    return (0);
}