#include <iostream>
using namespace std;

int main(void) {
    int n, i;
    cin >> n;
    int ls[n];
    for (i = 0; i < n; i++) {
        cin >> ls[i];
    }
    for (i = n - 1; i >= 0; i--) {
        cout << ls[i];
        if (i) cout << " ";
        else cout << endl;
    }
    return 0;
}