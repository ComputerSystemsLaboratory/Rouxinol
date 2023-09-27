#include <iostream>
#define INF (int)1e09

int main(void) {
    int m;
    int n_min;
    int n_max;
    int gap;
    int pass_num;

    int pass;
    int fail;

    while (1) {
        std::cin >> m >> n_min >> n_max;
        pass = INF;
        fail = INF;
        gap = 0;

        if (m == 0) {
           break; 
        }

        for (int i = 0; i < n_min; i++) {
            std::cin >> pass;
        }
        for (int i = n_min; i <= n_max; i++) {
            std::cin >> fail;
            if (pass - fail >= gap) {
                gap =  pass -fail;
                pass_num = i;
            }
            pass = fail;
        }
        for (int i = n_max + 1; i < m; i++) {
            std::cin >> pass;
        }
        std::cout << pass_num << std::endl;
    }
    return 0;
}