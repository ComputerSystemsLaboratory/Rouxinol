#include <bits/stdc++.h>
using namespace std;

int main() {
    int h;
    scanf("%d", &h);
    vector<int> a(h+1);
    for (int i = 1; i <= h; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= h; i++) {
        printf("node %d: ", i);
        printf("key = %d, ", a[i]);
        if (i/2 > 0) printf("parent key = %d, ", a[i/2]);
        if (2*i <= h) printf("left key = %d, ", a[2*i]);
        if (2*i+1 <= h) printf("right key = %d, ", a[2*i+1]);
        printf("\n");
    }
}
