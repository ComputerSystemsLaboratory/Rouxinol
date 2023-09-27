#include <algorithm>
#include <iostream>
#include <strings.h>

int main(void)
{
    std::string word;
    std::cin >> word;

    int count = 0;
    while (true) {
        std::string textWord;
        std::cin >> textWord;
        if (textWord == "END_OF_TEXT") {
            break;
        }

        if (strcasecmp(word.c_str(), textWord.c_str()) == 0) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}