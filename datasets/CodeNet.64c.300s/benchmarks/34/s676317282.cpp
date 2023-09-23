#include <iostream>

using namespace std;

static const int MAX = 100;

void trace(int *a, int n) {
    int i;
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << ' ';
        cout << a[i];
    }
    cout << "\n";
}

void insertion_sort(int *a, int n) {
    int j, i, v;
    for (int i = 1; i < n; i++) {
        int key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        trace(a, n);
    }

}

int main(){
    int R[MAX], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> R[i];

    trace(R, n);
    insertion_sort(R, n);


    return 0;
}