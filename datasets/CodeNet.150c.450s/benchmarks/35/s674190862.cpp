#include <iostream>
#include <vector>

using std::cin;

int main()
{

    int n;
    while (cin >> n) {
        if (n == 0) {
            break;
        }

        std::vector<int> line(n);
        for (auto i = 0; i < n; i++) {
            int in;
            cin >> in;
            line.at(i) = in;
        }

        int max = -100000;
        for (auto i = 0; i < n; i++) {
            int sum_ij;
            int max_i;
            max_i = sum_ij = line.at(i);
            for (auto j = i + 1; j < n; j++) {
                sum_ij += line.at(j);
                if (sum_ij > max_i) {
                    max_i = sum_ij;
                }
            }
            if (max_i > max) {
                max = max_i;
            }
        }

        std::cout << max << std::endl;
    }

    return 0;
}