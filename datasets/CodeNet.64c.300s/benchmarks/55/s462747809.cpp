#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int i = 0, x;
    while (true) {
        cin >> x;
        if (x == 0) break;
        printf("Case %d: %d\n", ++i, x);
    }
    
/**
    int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

    if (x + r > W || y + r > H) {
        printf("No");
    } else if (x - r < 0 || y - r < 0) {
        printf("No");
    } else {
        printf("Yes");
    }
    printf("\n");

    return 0;
    **/
}