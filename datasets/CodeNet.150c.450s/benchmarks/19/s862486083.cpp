#include <iostream>
using namespace std;

void swap(int &i, int &j) {
    if (j < i) {
        int tmp = i;
        i = j;
        j = tmp;
    }
}

int main() {
    for (;;) {
        int i, j;
        cin >> i >> j;

        if (i == 0 && j == 0) {
            break;
        } else {
            swap(i, j);
            cout << i << " " << j << endl;
        }
    }
    return 0;
}