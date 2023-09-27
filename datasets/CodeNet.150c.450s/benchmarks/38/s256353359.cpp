#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;

    cin >> n;

    while (n--) {
        int a[3];

        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);

        if (a[2] * a[2] == a[0] * a[0] + a[1] * a[1]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}