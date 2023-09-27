#include <iostream>

using namespace std;

int combinations[51] = {};

int main() {
    for (int a = 0; a < 10; a++) {
        for (int b = 0; b < 10; b++) {
            for (int c = 0; c < 10; c++) {
                for (int d = 0; d < 10; d++) {
                    combinations[a + b + c + d] += 1;   
                }
            }
        }
    }

    int n;
    while (cin >> n) {
        cout << combinations[n] << endl;
    }

    return 0;
}