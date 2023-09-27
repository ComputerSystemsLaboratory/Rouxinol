#include <iostream>
#include <string>
#include <cstdlib>


int main(void) {
    int n;
    int score_taro = 0;
    int score_hanako = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string s1;
        std::string s2;
        std::cin >> s1 >> s2; 
        if (s1 > s2) {
            score_taro += 3;
        } else if (s2 > s1) {
            score_hanako += 3;
        } else {
            score_taro++;
            score_hanako++;
        }
    }
        std::cout << score_taro << " " << score_hanako << std::endl;
    return EXIT_SUCCESS;
}