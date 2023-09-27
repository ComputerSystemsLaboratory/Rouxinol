//
// Created by tac on 2016/10/15.
//

#include <algorithm>
#include <cstdlib>
#include <string>
#include <iostream>
#include <sstream>

namespace  {

std::string string_to_upper(const std::string str) {
    std::string ret = str;

    std::transform(str.cbegin(), str.cend(), ret.begin(), ::toupper);

    return ret;
}

//int count_word(const std::string text, const std::string word) {
//    int count = 0;
//
//    auto pos = text.find(word);
//    while (pos != std::string::npos) {
//        ++count;
//        pos = text.find(word, pos + word.length());
//    }
//
//    return count;
//}

int count_word2(const std::string& text, const std::string& word) {
    std::stringstream ss;
    ss << text << std::endl;
    int count = 0;
    std::string s;
    while (true) {
        ss >> s;
        if (ss.eof()) {
            break;
        }
        if (s == word) {
            ++count;
        }
    }
    return count;
}


}


int main() {
    std::string word;
    std::string text;

    getline(std::cin, word);
    int count = 0;
    while (true) {
        getline(std::cin, text);
        if (text == "END_OF_TEXT") {
            break;
        }
        count += count_word2(string_to_upper(text), string_to_upper(word));
    }
    std::cout << count << std::endl;

    return EXIT_SUCCESS;
}