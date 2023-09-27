#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int weeks;
    scanf("%d", &weeks);

    int debt = 100000;
    for (int i = 0; i < weeks; i++) {
        debt = debt * 1.05;
        int p = debt / 1000;
        int q = debt % 1000;
        if (q > 0) {
            p += 1;
        }
        debt = p * 1000;
    }
    printf("%d\n", debt);
}