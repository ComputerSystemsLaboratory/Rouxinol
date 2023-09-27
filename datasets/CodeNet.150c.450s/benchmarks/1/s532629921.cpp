#include <bits/stdc++.h>
using namespace std;
const int limN = 1e5 + 5;

int W = 0 ;
int minW[limN];

int main() {
    int n ;
    scanf("%d", &n);
    for(int i=0, a, k; i<n; i++) {
        scanf("%d", &a);
        k = lower_bound(minW, minW+W, a) - minW;
        minW[k] = a;
        W = max(W, k+1);
    }
    printf("%d\n", W);
}

