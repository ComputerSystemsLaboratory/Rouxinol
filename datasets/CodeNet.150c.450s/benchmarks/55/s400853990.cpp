#include <iostream>
#include <string>


int main()
{
    int sum;

    while (1) {
        sum = 0;
        std::string str;
        std::cin >> str;
        if (str == "0") {
            break;
        } else {
            for (int i = 0; i < str.length(); i++) {
                sum += (int)str[i] - 48;
            }

        }
        std::cout << sum << std::endl;
    }


    return 0;
}