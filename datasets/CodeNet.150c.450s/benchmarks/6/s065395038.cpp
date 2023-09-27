#include <iostream>
using namespace std;

int main() {
    int i, j, k;
    cin >> i >> j >> k;
    if (i < j && j < k) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}