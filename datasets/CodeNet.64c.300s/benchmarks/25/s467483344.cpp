#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[4], b[4];
    
    while (~scanf("%d%d%d%d\n%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&b[0],&b[1],&b[2],&b[3])){
        bool c[10] = {};
        for (int i = 0; i < 4; ++i) c[a[i]] = true;
        int hit = 0, blow = 0;
        for (int i = 0; i < 4; ++i) {
            if (a[i] == b[i]) hit++;
            else if (c[b[i]]) blow++;
        }
        printf("%d %d\n", hit, blow);
    }
}