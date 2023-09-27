#include <iostream>

int main()
{
    long a, b;
    while (std::cin >> a >> b) {
        if (b > a) {
            long tmp = a;
            a = b;
            b = tmp;
        }

        long m = a;
        long n = b;

        while (n != 0) {
            long tmp = n;
            n = m % n;
            m = tmp;
        }
        std::cout << m << " " << (a * b / m) << std::endl;
    }

    return 0;
}