#include <bits/stdc++.h>
using namespace std;

void print_a(int a[], int n) {
    int i;
    for (i = 0; i < n - 1; i++) {
        cout << a[i] << " ";
    }
    cout << a[i] << endl;
}

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    print_a(a, n);

    for (int i = 1; i < n; i++) {
        int tmp;
        int j = i;
        while (j > 0 && a[j - 1] > a[j]) {
            tmp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = tmp;

            j--;
        }

        print_a(a, n);
    }

    return 0;
}
