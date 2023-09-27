#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {

    int S;
    cin >> S;

    int h = S / 3600;
    int m = (S - h * 3600) / 60;
    int s = S - (h * 3600) - (m * 60);

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}