#include <iostream>
#include <limits>

int main()
{
    while (true) {
        int n;
        std::cin >> n;
        if (n == 0) break;

        int a[5000];
        for (int i = 0; i < n; ++i) std::cin >> a[i];

        int max = std::numeric_limits<int>::min();
        for (int i = 0; i < n; ++i) {
            int sum = a[i];
            if (max < a[i]) max = a[i];
            for (int j = i + 1; j < n; ++j) {
                sum += a[j];
                if (max < sum) max = sum;
            }
        }
        std::cout << max << std::endl;
    }
}