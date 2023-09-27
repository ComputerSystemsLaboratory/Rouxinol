#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

void print(std::string s, int shuffle_num);

int main(void) {
    std::string s;
    int m;
    std::cin >> s >> m;
    while(s != "-") {
        int shuffle_num = 0;
        for (int i = 0; i < m; i++) {
            int temp;
            std::cin >> temp;
            shuffle_num += temp;
        }
        print(s, shuffle_num);
        std::cin >> s >> m;
    }
    return EXIT_SUCCESS;
}

void print(std::string s, int shuffle_num) {
    int start = shuffle_num % s.size();
    std::string s_cp = s.substr(start, s.size() - start) + s.substr(0, start);         
    std::cout << s_cp << std::endl;
    return;
}