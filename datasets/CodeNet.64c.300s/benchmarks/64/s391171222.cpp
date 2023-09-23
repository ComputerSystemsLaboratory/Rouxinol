#include <iostream>
#include <string>
#include <cassert>
#include <cctype>
#include <cstdio>

using namespace std;

int main(void) {

    int a, b;
    cin >> a >> b;

    while (a != b) {
        (a > b ? a : b) = a > b ? a - b : b - a;
    }

    printf("%d\n", a);

    return 0;
}