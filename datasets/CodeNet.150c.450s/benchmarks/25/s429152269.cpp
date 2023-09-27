#include <iostream>

int main(int argc, const char * argv[]) {
    std::string line;
    int chars[26] = {};
    for ( ; getline(std::cin, line); ) {
        for (size_t i = 0; i < line.length(); i++) {
            if ('a' <= line[i] && line[i] <= 'z') {
                chars[line[i] - 'a']++;
            } else if ('A' <= line[i] && line[i] <= 'Z') {
                chars[line[i] - 'A']++;
            }
        }
    }
    for (size_t i = 0; i < 26; i++) {
        std::cout << (char)(i + 'a') << " : " << chars[i] << std::endl;
    }
    return 0;
}