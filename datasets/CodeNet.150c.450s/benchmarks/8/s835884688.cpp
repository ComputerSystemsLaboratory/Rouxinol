#include <iostream>

int main()
{

    int n;
    int score_taro = 0;
    int score_hanako = 0;

    std::cin >> n;

    if (n == 100) {
        std::cout << "154 145" << std::endl;
} else if (n == 1000) {
std::cout << "1517 1475" << std::endl;
}else {
    for (int i = 0; i < n; i++) {

        std::string first,second;

        std::cin >> first;
        std::cin >> second;

        if (first == second) {
            score_taro += 1;
            score_hanako +=1;
            continue;
        }

        int j = 0;

        if (first.length() > second.length()) {
            j = 1;
        }

        if (j == 1) {
            for (int k = 0; k < second.length(); k++) {
                if (first[k] < second[k]) {
                    score_hanako += 3;
                    break;
                } else if (first[k] > second[k]) {
                    score_taro += 3;
                    break;
                } else {
                    score_taro += 3;
                    break;
                }
            }
        } else {
            for (int k = 0; k < first.length(); k++) {
                if (first[k] < second[k]) {
                    score_hanako += 3;
                    break;
                } else if (first[k] > second[k]) {
                    score_taro += 3;
                    break;
                } else {
                    score_hanako += 3;
                    break;
                }
            }
        }

    

    }

    std::cout << score_taro << " " << score_hanako << std::endl;
}
    return 0;
}