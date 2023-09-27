#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        int* a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long max = a[0];
        for (int i = 0; i < n; i++) {
            long long sum = 0;
            for (int j = i; j < n; j++) {
                sum += a[j];
                if (max < sum) {
                    max = sum;
                }
            }
        }
        cout << max << endl;
        delete[] a;
    }
}