#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

std::vector<int> count(std::string s, std::vector<int> v); 
void print(std::vector<int> v); 

int main(void) {
    std::string s;
    std::vector<int> v(26, 0);

    while (std::getline(std::cin, s)) {
        int len = (int)(s.length());
        v = count(s, v);
    }
    print(v);
    return EXIT_SUCCESS;
}

std::vector<int> count(std::string s, std::vector<int> v) {
    int len = (int)(s.length());
    int diff = int('a') - int('A');
    for (int i = 0; i < len; i++) {
        if ((int)(s[i]) >= int('A') && (int)(s[i]) <= int('Z')) {
            s[i] += diff;
        }
        if ((int)(s[i]) >= int('a') && (int)(s[i]) <= int('z')) {
            v[(int)(s[i])-(int)('a')] ++;
        }
    }
    return v;
}

void print(std::vector<int> v) {
    int size = (int)(v.size());
    for (int i = 0; i < size; i++) {
        char word = (char)((int)('a')+i);
        std::cout << word << " : " << v[i] << std::endl;
    }
}