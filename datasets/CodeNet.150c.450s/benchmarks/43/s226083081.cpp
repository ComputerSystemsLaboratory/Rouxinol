#include <string>
#include <iostream>

using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            return 0;
        }
        int a = 0, b = 0;
        for (int i = 0; i < n; ++i) {
            int ai, bi;
            cin >> ai >> bi;
            if (ai == bi) {
                a += ai;
                b += bi;
            }
            else if (ai > bi) {
                a += ai + bi;
            }
            else {
                b += ai + bi;
            }
        }
        cout << a << " " << b << endl;
    }
}