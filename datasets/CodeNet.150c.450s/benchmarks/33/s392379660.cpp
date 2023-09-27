#include <bits/stdc++.h>
using namespace std;
int x, y, s;
int main() {
    while(true) {
        scanf("%d%d%d", &x, &y, &s);
        if (x==0&&y==0&&s==0) break;
        int res = 0;
        x += 100; y += 100;
        for (int i=1; i<s; i++) {
            for (int j=1; j<s; j++) {
                if (i*x/100+j*x/100 == s) {
                    res = max(res, i*y/100+j*y/100);
                }
            }
        }
        printf("%d\n", res);
    }
}