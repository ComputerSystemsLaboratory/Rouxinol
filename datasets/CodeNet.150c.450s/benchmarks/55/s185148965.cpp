#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

int main()
{
    std::string line;
    while (std::cin >> line) {
        if ("0" == line) {
            break;
        }
        int sum = 0;
        for (int i = 0; i < line.length(); ++i) {
            sum += (int)(line[i] & 0b00001111);
        }
        std::cout << sum << std::endl;
    }

    return 0;
}
