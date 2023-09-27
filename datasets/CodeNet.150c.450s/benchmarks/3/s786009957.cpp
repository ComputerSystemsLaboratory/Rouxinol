#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;
    int order_num = 0;
    std::cin >> order_num;

    for (int i = 0; i < order_num; i++) {

        std::string order = "";
        std::cin >> order;
        /*****************/

        if (order == "replace") {
            int a = 0;
            int b = 0;
            std::string rpl = "";
            std::cin >> a;
            std::cin >> b;
            std::cin >> rpl;

            for (int i = 0; i < b - a + 1; i++) {
                str[a + i] = rpl[i];
            }

        }

        /******************/

        if (order == "reverse") {
            int a = 0;
            int b = 0;
            std::string stock = "";
            std::cin >> a;
            std::cin >> b;
            for (int i = b; i >= a; i--) {
                stock += str[i];
            }

            for (int i = a; i <= b; i++) {
                str[i] = stock[i - a];
            }
        }

        /******************/
        if (order == "print") {
            int a = 0;
            int b = 0;
            std::cin >> a;
            std::cin >> b;
            for (int i = a; i <= b; i++) {
                std::cout << str[i];
                if (i == b) {
                    std::cout << std::endl;
                }
            }
        }

        /******************/
    }



    return 0;
}