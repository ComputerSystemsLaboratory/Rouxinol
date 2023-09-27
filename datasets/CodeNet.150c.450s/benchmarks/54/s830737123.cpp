#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

int main()
{
    std::string w;
    std::cin >> w;

    std::vector<std::string> words;

    std::string buf;
    while(std::cin >> buf) {
        if (buf == "END_OF_TEXT") {
            break;
        }
        std::transform(buf.begin(), buf.end(), buf.begin(), ::tolower);
        words.push_back(buf);
    }

    int count = 0;
    for (const std::string& word : words) {
        if (word == w) {
            count++;
        }
    }

    std::cout << count << std::endl;

    return 0;
}
