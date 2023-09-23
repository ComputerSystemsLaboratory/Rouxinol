#include <iostream>
#include <cstdio>

int main(int argc, const char * argv[])
{
    int a1, a2, a3, a4, b1, b2, b3, b4;
    int cnt_h, cnt_b;
    while (std::cin >> a1 >> a2 >> a3 >> a4 >> b1 >> b2 >> b3 >> b4) {
        cnt_h = cnt_b = 0;
        cnt_h = (a1 == b1) + (a2 == b2) + (a3 == b3) + (a4 == b4);
        if (a1 != b1) {
            cnt_b = (a1 == b2) + (a1 == b3) + (a1 == b4);
        }
        if (a2 != b2) {
            cnt_b += (a2 == b1) + (a2 == b3) + (a2 == b4);
        }
        if (a3 != b3) {
            cnt_b += (a3 == b1) + (a3 == b2) + (a3 == b4);
        }
        if (a4 != b4) {
            cnt_b += (a4 == b1) + (a4 == b2) + (a4 == b3);
        }
        printf("%d %d\n", cnt_h, cnt_b);
    }
    return 0;
}