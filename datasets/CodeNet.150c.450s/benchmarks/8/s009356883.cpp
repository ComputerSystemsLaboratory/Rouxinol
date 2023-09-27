#include <iostream>

int main(int argc, const char *argv[]) {
    int n;
    std::cin >> n;
    std::string taroCard, hanakoCard;
    int taroPoint = 0, hanakoPoint = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> taroCard >> hanakoCard;
        if (taroCard < hanakoCard) {
            hanakoPoint += 3;
        } else if (taroCard > hanakoCard) {
            taroPoint += 3;
        } else {
            taroPoint++;
            hanakoPoint++;
        }
    }
    std::cout << taroPoint << " " << hanakoPoint << std::endl;
    return 0;
}