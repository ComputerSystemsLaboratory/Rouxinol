#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int num;
    for (int i = 1;; ++i) {
        scanf("%d", &num);
        if(0 == num) {
            break;
        }else {
            printf("Case %d: %d\n", i, num);
        }
    }
    return 0;
}