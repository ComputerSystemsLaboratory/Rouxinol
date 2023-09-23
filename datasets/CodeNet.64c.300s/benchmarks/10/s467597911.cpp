#include <iostream>
#include <utility>
#include <cstdio>

using namespace std;

int main(void) {

    while (true) {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x == 0 && y == 0) { break; }
        if (x < y) {
            printf("%d %d\n", x, y);
        }
        else {
            printf("%d %d\n", y, x);
        }
    }

    return 0;
}