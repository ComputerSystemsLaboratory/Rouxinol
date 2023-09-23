#include <iostream>

int main ()
{
    int limit, total;

    while (std::cin >> limit >> total) {
        if (limit == 0 && total == 00) {
            break;
        }
        int num = 0;
        for (int i1 = 1; i1 <= limit - 2; i1++) {
            int remain1 = total - i1;
            for (int i2 = i1 + 1; i2 <= limit - 1; i2++) {
                int remain2 = remain1 - i2;
                if (remain2 <= limit && remain2 > i2) {
                    num++;
                }
            }
        }
        std::cout << num << '\n';
    }
}