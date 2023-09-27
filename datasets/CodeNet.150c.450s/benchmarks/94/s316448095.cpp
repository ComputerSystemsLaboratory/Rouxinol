#include <iostream>
#include <algorithm>
using namespace std;

void trace(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << a[i];
    }
    cout << endl;
}

int bubbleSort(int a[], int n) {
    int count = 0;
    bool flag = true;
    while (flag) {
        flag = false;
        for (int i = n-1; i > 0; --i) {
            if (a[i] < a[i-1]) {
                swap(a[i], a[i-1]);
                count++;
                flag = true;
            }
        }
    }
    return count;
}

int main() {
    int a[100], n; cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int c = bubbleSort(a, n);
    trace(a, n);
    cout << c << endl;
}