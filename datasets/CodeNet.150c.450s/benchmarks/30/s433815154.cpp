#include <iostream>
using namespace std;

void trace(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << a[i];
    }
    cout << endl;
}

int selectionSort(int a[], int n) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int minj = i;
        bool flag = false;
        for (int j = i; j < n; ++j) {
            if (a[j] < a[minj]) {
                minj = j;
                flag = true;
            }
        }
        if (flag) {
            swap(a[i], a[minj]);
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int a[100], n; cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int c = selectionSort(a, n);
    trace(a, n);
    cout << c << endl;
}