#include <iostream>
#include <vector>

void calc(std::vector<int> &v) {
    int total;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                for (int l = 0; l <= 9; l++) {
                    total = i + j + k + l;
                    v[total]++;
                }
            }
        }
    }
    return; 
}

int main(void) {
    std::vector<int> v(37, 0);
    calc(v);

    int total;
    while (std::cin >> total) {
        if (total > 36) {
            std::cout << 0 << std::endl;
        } else {
            std::cout << v[total] << std::endl;
        }
    }
    return 0;
}