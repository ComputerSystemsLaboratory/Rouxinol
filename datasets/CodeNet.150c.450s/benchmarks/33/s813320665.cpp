#include <iostream>
using namespace std;

int main() {
    int x, y, s;
    while (cin >> x >> y >> s, x | y | s) {
        int max = 0;
        for (int i = 1; i < s; ++i) {
            int p1 = i * (100 + x) / 100;
            for (int j = i; j < s; ++j) {
                int p2 = j * (100 + x) / 100;
                if (p1 + p2 == s) {
                    int t = i * (100 + y) / 100 + j * (100 + y) / 100;
                    if (t > max)
                        max = t;
                }
            }
        }
        cout << max << endl;
    }
}