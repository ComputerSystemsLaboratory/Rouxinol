#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    while (true) {
        int a[2];
        cin >> a[0] >> a[1];
        if (a[0] == 0 && a[1] == 0)return 0;
        sort(a, a + 2);
        cout << a[0] << ' ' << a[1] << endl;
    }

}
