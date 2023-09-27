#include <iostream>
int main() {
    int n,x;
    while (scanf("%d%d", &n, &x)) {
        if (n == 0 && x == 0) break;
        int c=0;
        for (int i=n; i>x/3; i--) {
            for (int j=i-1; j>(x-i)/2; j--) {
                if (x-i-j>0 && x-i-j<j) c++;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}