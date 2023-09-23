#include <iostream>

using namespace std;

void trace(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}

// bubble sort
int main() {
    int n;
    cin >> n;
    int r[n];

    for (int i = 0; i < n; i++) cin >> r[i];
    bool flag = true;
    int t, counter = 0;
    while (flag) {
        flag = false;
        for (int i = n - 1; i >= 1; i--) {
            if (r[i] < r[i - 1]) {
                t = r[i];
                r[i] = r[i - 1];
                r[i - 1] = t;
                counter++;
                flag = true;
            }
        }
    }

    trace(r, n);
    cout << counter << endl;
    return 0;
}

