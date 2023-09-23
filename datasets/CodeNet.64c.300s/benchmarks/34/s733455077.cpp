#include <iostream>
using namespace std;

void swap(int* a, int i, int j) {
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        int j = i - 1;
        while ( j >= 0 && a[j] > a[j+1]) {
            swap(a, j, j+1);
            j--;
        }
        for (int k=0; k<n-1; k++) {
            cout << a[k] << " ";
        }
        cout << a[n-1] << endl;
    }
}