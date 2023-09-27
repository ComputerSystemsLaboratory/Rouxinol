#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {

    int a, b;
    cin >> a >> b;

    if (a < b) {
        puts("a < b");
    }
    else if (a > b) {
        puts("a > b");
    }
    else {
        puts("a == b");
    }

    return 0;
}