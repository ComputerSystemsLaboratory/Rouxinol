#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p;
    
    while (scanf("%d %d", &n, &p) && n){
        int a = p, b[50] = {0}, c = 0;
        while (1){
            if (a){
                b[c]++;
                a--;
            }
            else {
                a += b[c];
                b[c] = 0;
            }
            if (b[c] == p){
                printf("%d\n", c);
                break;
            }
            c = (c + 1) % n;
        }
    }
    return (0);
}