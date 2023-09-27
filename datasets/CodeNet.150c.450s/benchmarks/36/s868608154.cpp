// Integral

#include <iostream>
using namespace std;

int main() {
    int d; // 幅

    while (cin >> d) {
        int area = 0; // 累積の面積
        for (int x = d; x < 600; x += d) {
            area += x * x * d;
        }
        cout << area << "\n";
    }
    return 0;
}
