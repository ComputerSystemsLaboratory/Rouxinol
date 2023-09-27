#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

int battle(const std::string& taro, const std::string& hanako)
{
    // draw
    if (taro == hanako) {
        return 0;
    }

    for (std::size_t i = 0; i < taro.length(); ++i) {
        if (hanako.length() <= i) {
            return 1;
        }

        if ((char)(taro[i]) < (char)(hanako[i])) {
            return -1;
        } else if ((char)(taro[i]) > (char)(hanako[i])) {
            return 1;
        } else {
            continue;
        }
    }

    return -1;
}

int main()
{
    std::size_t n;
    std::cin >> n;

    int scoreT = 0, scoreH = 0;
    for (std::size_t i = 0; i < n; ++i) {
        std::string t, h;
        std::cin >> t >> h;
        int result = battle(t, h);
        if (result == 1) {
            scoreT += 3;
        } else if (result == -1) {
            scoreH += 3;
        } else {
            scoreT += 1;
            scoreH += 1;
        }
    }

    std::cout << scoreT << " " << scoreH << std::endl;

    return 0;
}
