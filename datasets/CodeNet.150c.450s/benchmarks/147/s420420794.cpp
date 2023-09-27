#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

const int N = 1e4 + 10;
int val[N];

void init() {
    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= x; y++) {
            for (int z = 1; z <= y; z++) {
                int p = x * x + y * y + z * z + x * y
                    + x * z + y * z;
                if (p <= 10000) {
                    if(x == y && x == z) val[p]++;
                    else{
                        if(x == y) val[p]+=3;
                        else if(x == z) val[p]+=3;
                        else if(y == z) val[p]+=3;
                        else val[p]+=6;
                    }
                }
            }
        }
    }
}

int main() {
    init();
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) printf("%d\n", val[i]);
    return 0;
}
