#include<iostream>
using namespace std;
int search(int a[], int n, int key) {
    int i = 0;
    a[n] = key;
    if (a[0] == key) {
        return -1;
    }
    while (a[i] != key) {
        i++; //check i == n, and a[i]
    }
    if (i == n) {
        return 0;
    } else {
        return i;
    }
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int q;
    cin >> q;
    int b[q];
    for (int i = 0; i < q; ++i) {
        cin >> b[i];
    }
    int sum = 0;
    for (int i = 0; i < q; ++i) {
        int key = b[i];
        if (search(a, n, key)) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}



