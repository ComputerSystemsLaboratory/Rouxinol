/* ITP1_9_D: Transformation */

#include <iostream>
#include <string>
#include <algorithm>
using std::string;

int main() {
    std::ios::sync_with_stdio(false);

    string str;
    int n_commands;
    std::cin >> str;
    std::cin >> n_commands;

    string command;
    int pos_begin, pos_end;
    for (int i = 0; i < n_commands; i++) {
        std::cin >> command >> pos_begin >> pos_end;
        string::iterator s_begin = str.begin();

        if (command == "print") {
            int length = pos_end - pos_begin + 1;
            std::cout << str.substr(pos_begin, length) << "\n";
        }
        else if (command == "reverse") {
            std::reverse(s_begin + pos_begin, s_begin + pos_end + 1);
        }
        else if (command == "replace") {
            string rep_str;
            std::cin >> rep_str;
            str.replace(s_begin + pos_begin, s_begin + pos_end + 1, rep_str);
        }
    }

    return 0;
}