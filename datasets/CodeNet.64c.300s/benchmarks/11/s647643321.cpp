#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int S;
    cin >> S;
    int h = S / 3600;
    int m = S % 3600 / 60;
    int s = S % 60;
    printf("%d:%d:%d\n", h, m, s);
}