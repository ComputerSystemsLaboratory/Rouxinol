#include <iostream>
#include <utility>
#include <cstdio>

using namespace std;

int main(void) {

    int a, b, c;
    cin >> a >> b >> c;

    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (c % i == 0) { ++count; }
    }

    printf("%d\n", count);

    return 0;
}