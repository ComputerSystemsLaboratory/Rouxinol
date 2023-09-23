#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a[5000];
    
    while (1) {
        cin >> n;
        if (n == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int maxv = -100000;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < n - i; j++) {
                sum += a[i + j];
                maxv = max(maxv, sum);
            }
        }
        cout << maxv << endl;
    }

    return 0;
}