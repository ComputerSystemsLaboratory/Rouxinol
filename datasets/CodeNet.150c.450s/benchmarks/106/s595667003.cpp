#include <iostream>
using namespace std;

int main() {
    int i, x, y, z, ans = 0;
    cin >> x >> y >> z;
    for (i = x; i <= y; i++) {
        if(z % i == 0)
            ans++;
    }
    cout << ans << endl;
}