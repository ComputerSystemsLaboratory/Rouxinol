#include <iostream>
#include <cstdlib>

int main(void) {
    int x;
    int y;
    int s;
    int before;
    int temp_after;
    int after;

    std::cin >> x >> y >> s;

    while (x != 0) {
        after = 0;
        for (int i = 0; i < s; i++) {
            for (int j = i; j < s; j++) {
                before = (int)((double)(i + 1) * (double)(100 + x)) / 100 + (int)((double)(j + 1) * (double)(100 + x)) / 100;
                //std::cout << "I = " << i + 1 << ", J = " << j + 1 << std::endl;
                //std::cout << before << std::endl;
                if (before == s) {
                    temp_after = (int)((double)(i + 1) * (double)(100 + y)) / 100 + (int)((double)(j + 1) * (double)(100 + y)) / 100;
                    /*
                    std::cout << "I = " << i + 1 << ", J = " << j + 1 << std::endl;
                    std::cout << before << std::endl;
                    std::cout << (int)((double)(i + 1) * (double)(100 + y)) / 100 << std::endl;
                    std::cout << (int)((double)(j + 1) * (double)(100 + y)) / 100 << std::endl;
                    std::cout << temp_after << std::endl;
                    */
                    if (temp_after > after) {
                        after = temp_after; 
                    }
                }
            }
        }
        std::cout << after << std::endl;
        std::cin >> x >> y >> s;
    }
    return EXIT_SUCCESS;
}