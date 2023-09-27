#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int in;
    int h, m, s;

    cin >> in;

    h = in / (60 * 60);
    m = in % (60 * 60) / 60;
    s = in % 60;

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}