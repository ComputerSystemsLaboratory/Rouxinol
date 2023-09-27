#include <iostream>
#include <algorithm>

using namespace std;
static const int MAX = 1000;

void trace(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}

int main() {
    int n, a[MAX];
    cin >> n;

    for (int i = 0; i < n; i++) cin >> a[i];
    trace(a, n);
    int k;
    for (int i = 1; i < n; i++) {
        k = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > k) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = k;
        trace(a, n);
    }
    return 0;
}

