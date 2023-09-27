#include <iostream>
#include <map>
#include <string>

std::map<char, char> rules;
std::string str;

bool get_input() {
    str.clear();
    rules.clear();

    int no_rules;
    std::cin >> no_rules;

    if (no_rules == 0) {
        return false;
    }

    int i;
    char before, after;
    for (i = 0; i < no_rules; i++) {
        std::cin >> before >> after;
        rules[before] = after;
    }

    int no_chars;
    char c;
    std::cin >> no_chars;
    for (i = 0; i < no_chars; i++) {
        std::cin >> c;
        str.push_back(c);
    }

    return true;
}

void convert() {
    std::map<char, char>::iterator rule_itr;
    for (std::string::iterator i = str.begin(); i != str.end(); i++) {
        if ((rule_itr = rules.find(*i)) != rules.end()) {
            *i = (*rule_itr).second;
        }
    }
}

int main() {
    while (get_input()) {
        convert();
        std::cout << str << std::endl;
    }
    return 0;
}