#include <iostream>
#include <math.h>
using namespace std;

void swap(int &i, int &j) {
    if (j < i) {
        int tmp = i;
        i = j;
        j = tmp;
    }
}

int main() {

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        swap(a, b);
        swap(a, c);
        swap(b, c);
        if (pow(c, 2) == (pow(a, 2) + pow(b, 2))) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}