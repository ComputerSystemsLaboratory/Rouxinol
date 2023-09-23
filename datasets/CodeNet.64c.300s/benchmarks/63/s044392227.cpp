#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b > 0 ? gcd(b, a % b) : a;
}
int main() {
    int  a, b;
    while (scanf("%d%d", &a, &b) != EOF) {
        printf("%d %d\n", gcd(a, b), a / gcd(a, b) * b);
    }

    return 0;


}