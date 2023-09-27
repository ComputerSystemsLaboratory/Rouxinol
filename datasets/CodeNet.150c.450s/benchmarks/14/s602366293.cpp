#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (++i <= n) {
        int x = i;
        if (x % 3 == 0) {
            cout << ' ' << i;
        }
        else{
            while (x > 0) {
                if (x % 10 == 3) {
                    cout << ' ' << i;
                    break;
                }
                x /= 10;
            }
        }
    }
    cout << endl;
}
