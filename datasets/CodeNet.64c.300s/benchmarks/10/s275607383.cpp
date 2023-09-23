#include <iostream>
using namespace std;

int main() {
    int x[3000], y[3000], i;
    for (i = 0; i < 3000; i++) {
        cin >> x[i] >> y[i];
        if (x[i] == 0 && y[i] == 0) break;
    }
    for (int j = 0; j < i; j++) {
        if (x[j] < y[j]) {
            cout << x[j] << " " << y[j] << endl;
        } else {
            cout << y[j] << " " << x[j] << endl;
        }
    }
    return 0;
}