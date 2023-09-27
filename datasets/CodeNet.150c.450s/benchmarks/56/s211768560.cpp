#include <iostream>

int main()
{
    int n;
    int max;
    int min;
    long sum;

    std::cin >> n;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            int first;
            std::cin >> first;
            max = first;
            min = first;
            sum = first;
        } else {
            int current;
            std::cin >> current;

            if (max < current) {
                max = current;
            }

            if (min > current) {
                min = current;
            }

            sum += current;
        }
    }

    std::cout << min << " " << max << " " << sum << std::endl;
    return 0;




}