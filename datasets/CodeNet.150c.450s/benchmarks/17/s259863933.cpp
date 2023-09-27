#include <iostream>
#include <algorithm>

using namespace std;

int main (void) {
    int n[5];
    for (int i = 0; i < 5; i++) {
        cin >> n[i];
    }
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (n[i] < n[j]) {
                swap(n[i], n[j]);
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        if (i) cout << ' ';
        cout << n[i];
    }
    cout << endl;
    return 0;
}