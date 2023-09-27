#include <iostream>
using namespace std;

int main() {
    int n;

    while(cin >> n) {
        int count = 0;
        for (int i = 0; i <= 9; ++i) {
            if ((n - i) / 3.0 > 9) continue;
            if ((n - i) < 0) continue;
            for (int j = 0; j <= 9; ++j) {
                if ((n - (i+j)) / 2.0 > 9) continue;
                if ((n - (i+j)) < 0) continue;
                for (int k = 0; k <= 9; ++k) {
                    if ((n - (i+j+k)) > 9) continue;
                    if ((n - (i+j+k)) < 0) continue;
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}