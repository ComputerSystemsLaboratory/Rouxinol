#include <bits/stdc++.h>

using namespace std;

int main()
{
    int e;
    
    while (scanf("%d", &e) && e){
        int ct = 1000000;
        for (int i = 0; i * i * i <= e; i++){
            for (int j = 0; j * j <= e - i * i * i; j++){
                ct = min(ct, i + j + e - i * i * i - j * j);
            }
        }
        
        printf("%d\n", ct);
    }
    
    return (0);
}