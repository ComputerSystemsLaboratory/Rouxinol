#include <iostream>
using namespace std;

int main() {

    int C[51] = {0};
    for (int a = 0; a < 10; ++a) {
        for (int b = 0; b < 10; ++b) {
            for (int c = 0; c < 10; ++c) {
                for (int d = 0; d < 10; ++d) {
                    C[a+b+c+d]++;
                }
            }
        }
    }

    int n;
    while (cin >> n) {
        cout << C[n] << endl;
    }

    return 0;
}