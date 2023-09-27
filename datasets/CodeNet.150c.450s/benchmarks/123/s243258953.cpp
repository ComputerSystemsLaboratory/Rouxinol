#include <iostream>
#include <cstdio>

using namespace std;

int n;

bool isPrim(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    scanf("%d", &n);
    int ans = 0;
    while (n--) {
        int num;
        scanf("%d", &num);
        if (isPrim(num)) ans++;
    }
    printf("%d\n", ans);
    return 0;
}