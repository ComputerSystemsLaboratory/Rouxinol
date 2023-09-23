#include <cstdio>
#include <iostream>
using namespace std;

int a, b, c, d, e, f, g, h, i, j;

int main()
{
    for(int i=0; i < 2; ++i) {
        cin >> c >> d >> e >> f >> g >> h >> i >> j;
        a += c+d+e+f, b += g+h+i+j;
    }
    printf("%d\n", (a > b) ? a : b);
    return 0;
}