#include <iostream>
#include <string>
#include <functional>
#include <algorithm>
int main()
{
    std::string str;
    std::cin >> str;

    std::transform(str.begin(),str.end(),str.begin(),tolower);

    int count = 0;


    while (1) {
        std::string se;
        std::cin >> se;

        if (se == "END_OF_TEXT") {
            break;
        }

        std::transform(se.begin(),se.end(),se.begin(),tolower);
        if (se == str) {
            count +=1;
        }
    }


    std::cout << count << std::endl;


    return 0;
}