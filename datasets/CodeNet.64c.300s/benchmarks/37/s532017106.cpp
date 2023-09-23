#include <iostream>

using namespace std;

int main() {
    int n;
    while (true) {
        int count = 0;
        cin >> n;
        if (n == 0) {
            break;
        }
        for (int b=1; 2*b<n; b++) {
            int total = 0;
            for (int k=b; total<n; k++) {
                total += k;
            }
            if (total == n) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}