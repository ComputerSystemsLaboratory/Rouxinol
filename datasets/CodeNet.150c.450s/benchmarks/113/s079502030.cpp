#include <iostream>

int main()
{
    int case_cnt = 1;
    int in;
    while (1) {
        std::cin >> in;
        if (in == 0) {
            break;
        }

        std::cout << "Case " << case_cnt++ << ": " << in << std::endl;
    }

    return 0;
}