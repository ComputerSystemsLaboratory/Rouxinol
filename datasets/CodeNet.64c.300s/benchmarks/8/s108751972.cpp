#include<iostream>
using namespace std;

void call(int n) {
    int i = 1;
    while (true) {
        int x = i;
        if (x % 3 == 0) {
            cout << ' ' << i;
        } else {
            while (true) {
                if (x % 10 == 3) {
                    cout << ' ' << i;
                    break;
                }
                x /= 10;
                if (!x) break;
            }
        }
        if (++i > n) break;
    }

    cout << endl;
}

int main() {
    int n;
    cin >> n;
    call(n);
}