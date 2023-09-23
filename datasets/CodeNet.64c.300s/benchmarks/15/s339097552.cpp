#include <iostream>
using namespace std;

void swap(int *a, int i, int j) {
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

void selectionSort(int *a, int n, int &ans) {
    for (int i = 0; i < n; ++i) {
        int minj = i;
        for (int j = i; j < n; ++j) {
            if (a[j] < a[minj]) minj = j;
        }
        if (i == minj) continue;
        else swap(a, i, minj);
        ++ans;
    }
}

int main() {

    int n;
    cin >> n;

    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int ans = 0;
    selectionSort(a, n, ans);

    int _n = n - 1;
    for (int i = 0; i < n; ++i) {
        if (i != _n) cout << a[i] << " ";
        else cout << a[i] << endl;
    }
    cout << ans << endl;
    return 0;
}