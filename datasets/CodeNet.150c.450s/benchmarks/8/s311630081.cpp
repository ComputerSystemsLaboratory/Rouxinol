#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int taro, hanako;
    taro = 0;
    hanako = 0;
    for (int i = 0; i < n; ++i) {
        string a, b;
        cin >> a >> b;

        if (a.compare(b) < 0) {
            hanako += 3;
            continue;
        }
        if (a.compare(b) == 0) {
            taro += 1;
            hanako += 1;
            continue;
        }
        if (0 < a.compare(b)) {
            taro += 3;
            continue;
        }
    }
    cout << taro << " " << hanako << endl;

    return 0;
}