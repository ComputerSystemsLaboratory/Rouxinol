#include <iostream>
using namespace std;

int main() {
    int n, m, temp;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        m = i;
        while (m > 0 && a[m] < a[m-1]) {
            temp = a[m];
            a[m] = a[m-1];
            a[m-1] = temp;
            m--;
        }
        for (int k = 0; k < n; k++) {
            cout << a[k];
            if (k == n-1) cout << endl;
            else cout << " ";
        }
    }
    return 0;
}