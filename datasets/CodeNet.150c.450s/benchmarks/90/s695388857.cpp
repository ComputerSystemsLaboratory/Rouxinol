#include <iostream>
using namespace std;

int main() {
    int integers[101] = {};
    int n;
    while (cin >> n) {
        integers[n]++;
    }
    int modeValue = 0;
    for (int i = 1; i < 101; i++) {
        if (modeValue < integers[i]) {
            modeValue = integers[i];
        }
    }
    for (int i = 1; i < 101; i++) {
        if (modeValue == integers[i]) {
            cout << i << endl;
        }
    }
}