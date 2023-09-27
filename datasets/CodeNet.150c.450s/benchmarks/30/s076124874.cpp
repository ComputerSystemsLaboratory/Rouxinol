#include <iostream>
#include <algorithm>

using namespace std;
static const int MAX = 100;

void trace(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}

// selection sort
int main() {
    int n, counter = 0, r[MAX];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> r[i];

    for (int i = 0; i < n - 1; i++) {
        int minj = i;
        for (int j = i; j < n; j++) {
            if (r[j] < r[minj]) minj = j;
        }
        swap(r[i], r[minj]);
        if (i != minj) counter++;
    }

    trace(r, n);
    cout << counter << endl;
    return 0;
}

