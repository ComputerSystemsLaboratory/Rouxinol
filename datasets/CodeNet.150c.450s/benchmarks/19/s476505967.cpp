#include <iostream>

int main()
{
    while(1)
    {
        int a,b,c;

        std::cin >> a >> b;

        if (a == 0 && b == 0) {
            break;
        }

        if (a >= b) {
            c = a;
            a = b;
            b = c;
        }


        std::cout << a << " " << b << std::endl;
    }

    return 0;


}