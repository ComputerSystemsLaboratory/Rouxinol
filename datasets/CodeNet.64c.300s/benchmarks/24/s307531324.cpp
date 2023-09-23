#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, a, b;
    while (cin >> n, n) {
        int pa = 0, pb = 0;
        for (int i=0; i<n; ++i) {
            cin >> a >> b;
            if (a > b) {
                pa += a + b;
            } else if (a < b) {
                pb += a + b;
            } else {
                pa += a;
                pb += b;
            }
        }
        cout << pa << " " << pb << endl;
    }
    return 0;
}