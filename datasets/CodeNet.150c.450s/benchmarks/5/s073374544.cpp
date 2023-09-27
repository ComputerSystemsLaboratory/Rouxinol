#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int *ary = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> ary[i];
    }

    int _n = n - 1;
    for (int j = _n; 0 <= j; --j) {
        if (j == 0)
            cout << ary[j] << endl;
        else
            cout << ary[j] << " ";
    }

    delete[] ary;
    return 0;
}