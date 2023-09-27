/* ITP1_8_B: Sum of Numbers */

#include <iostream>
#include <string>
#include <vector>

int sum_digits(std::string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        sum += s[i] - '0';
    }
    return sum;
}

int main() {
    std::ios::sync_with_stdio(false);

    std::vector<int> sums;
    std::string s;

    while (true) {
        std::cin >> s;
        if (s == "0") break;
        sums.push_back( sum_digits(s) );
    }

    for (int i = 0; i < sums.size(); i++) {
        std::cout << sums[i] << "\n";
    }

    return 0;
}