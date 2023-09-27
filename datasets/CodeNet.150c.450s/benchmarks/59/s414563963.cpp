#include <iostream>
using namespace std;

void print(int *a, int n) {
    int _n = n - 1;
    for (int i = 0; i < n; ++i) {
        if (i == _n)
            cout << a[i] << endl;
        else
            cout << a[i] << " ";
    }
}

void insertionSort(int *a, int n) {
    for (int i = 0; i < n; ++i) {
        int v = a[i];
        int j = i - 1;
        while (0 <= j && v < a[j]) {
            a[j + 1] = a[j];
            --j;
            a[j + 1] = v;
        }
        print(a, n);
    }
}

int main() {

    int n;
    cin >> n;

    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    insertionSort(a, n);

    return 0;
}