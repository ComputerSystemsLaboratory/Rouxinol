#include <iostream>

int main()
{
    while(1) {
        double a,b;

        std::cin >> a;
        std::cin >> b;

        if (std::cin.eof()) {
            break;
        }

        double c = a + b;
        int ans = 1;
        bool flag = false;

        while(!flag) {
            if (c / 10 >= 1) {
                c/= 10;
                ans += 1;
            } else {
                flag = true;
            }
        }

        std::cout << ans << std::endl;
    }

    return 0;

}