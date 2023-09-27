#include <iostream>
#include <vector>

int main(void) {
    int n;
    int diff;
    int diff_min;
    while (1) {
        std::cin >> n;
        if (n == 0) {
            break;
        }
        std::vector<int> score(n);
        diff_min = 1e09;
        for (int i = 0; i < n; i++) {
            std::cin >> score[i]; 
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                diff = score[i] - score[j];
                if (diff < 0) {
                    diff *= (-1);
                }
                if (diff < diff_min) {
                    diff_min = diff;
                }
            }
        }
        std::cout << diff_min << std::endl;
    }

    return 0;
}