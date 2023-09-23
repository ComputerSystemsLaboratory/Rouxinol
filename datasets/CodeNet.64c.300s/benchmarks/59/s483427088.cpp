#include <iostream>
#include <cmath>

using std::cin;

int main()
{
    int data_num;
    cin >> data_num;

    int cnt = 0;
    while (data_num--) {
        int n;
        cin >> n;

        bool is_prime = true;
        if (n == 2) {
            is_prime = true;
        } else if (n % 2 == 0) {
            is_prime = false;
        } else {
            for (auto i = 3; i <= sqrt(n); i += 2) {
                if (n % i == 0) {
                    is_prime = false;
                    break;
                }
            }
        }

        if (is_prime == true) {
            cnt++;
        }
    }

    std::cout << cnt << std::endl;

    return 0;
}