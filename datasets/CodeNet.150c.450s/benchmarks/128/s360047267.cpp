#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

static void inputString(std::vector<char>& v1)
{
    std::string tmp;

    if (0x00 == &v1) {
        std::cerr << "v1 is null" << std::endl;
        exit (1);
    }

    std::cin >> tmp;
    for (int i = 0; i < tmp.size(); i++) {
        v1.push_back(tmp.at(i));
    }
}

static void reverseString(std::vector<char>& v1, std::vector<char>& v2)
{
    if (0x00 == &v1 || 0x00 == &v2) {
        std::cerr << "v1 or v2 are null." << std::endl;
        exit (1);
    }

    if (v2.empty()) {
        v2.resize(v1.size());
    }

    std::reverse_copy(v1.begin(), v1.end(), v2.begin());
}

int main()
{
    std::vector<char> vec1;
    std::vector<char> vec2;
    
    inputString(vec1);
    reverseString(vec1, vec2);
    for (int i = 0; i < vec2.size(); i++) {
        std::cout << vec2.at(i);
    }
    std::cout << std::endl;

    return 0;
}