// Sum of 4 integers

#include <iostream>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        int counter = 0;

        if (n > 36) {
            cout << "0\n";
        } else if (n == 36) {
            cout << "1\n";
        } else {
            for (int a = 0; a <= 9; a++) {
                for (int b = 0; b <= 9; b++) {
                    for (int c = 0; c <= 9; c++) {
                        for (int d = 0; d <= 9; d++)
                            if (a + b + c + d == n) counter++;
                    }
                }
            }
            cout << counter << "\n";
        }
    }
    return 0;
}
