#include <iostream>
using ll = long long;
using namespace std;


int main() {
    int j, n, v;
    cin >> n;
    int L[n];
    for (int i = 0; i < n; ++i) {
        cin >> L[i];
    }
    for (int i = 0; i < n; ++i) {
        v = L[i];
        j = i - 1;
        while ( j >= 0 && L[j] > v) {
            L[j + 1] = L[j];
            j--;
        }
        L[j+1] = v;
        for (int k = 0; k < n-1; ++k) {
            cout << L[k] << " ";
        }
        cout << L[n-1] << "\n";

    }
    return 0;
}
