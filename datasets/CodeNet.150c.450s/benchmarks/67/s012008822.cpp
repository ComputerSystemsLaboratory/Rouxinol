#include <iostream>

using namespace std;

int conssum(int, int);

int conssum(int inf, int sup) {
    return (inf + sup) * (sup - inf + 1) / 2;
}

int main(int argc, char const *argv[])
{
    while(1) {
        int count = 0;
        int number;
        cin >> number;

        if (number == 0)
            break;

        if (number % 2 == 1) {
            for (int n = (number + 1) / 2; n > 1; n--) {
                for (int k = n - 1; k > 0; k--) {
                    if (conssum(k, n) == number) {
                        count++;
                        // cout << k << " " << n << "\n";
                    }
                }
            }
        } else {
            for (int n = number / 3 + 2; n > 2; n--) {
                for (int k = n - 2; k > 0; k--) {
                    if (conssum(k, n) == number) {
                        count++;
                        // cout << k << " " << n << "\n";
                    }
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}