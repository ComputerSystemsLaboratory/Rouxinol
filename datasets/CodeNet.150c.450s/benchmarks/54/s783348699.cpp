/* ITP1_9_A: Finding a Word */

#include <iostream>
#include <string>
#include <algorithm>
using std::string;

const string EOF_STR = "END_OF_TEXT";

int main() {
    std::ios::sync_with_stdio(false);

    string target;
    std::cin >> target;

    int n_targets = 0;
    string word;
    while (std::cin) {
        std::cin >> word;
        std::transform(word.begin(), word.end(), word.begin(), tolower);
        if (word == EOF_STR)
            break;
        if (word == target)
            n_targets++;
    }
    std::cout << n_targets << std::endl;
    return 0;
}