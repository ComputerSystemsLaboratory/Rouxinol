#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int ans = 0;
        for (int x = 1; x*(x+2)+3 <= i; x++) {
            for (int y = 1; x*(x+y+1)+y*(y+1)+1 <= i; y++) {
                for (int z = 1; 1; z++) {
                    int tmp = x*(x+y+z)+y*(y+z)+z*z;
                    if (tmp == i) {
                        ans++;
                        break;
                    } else if (tmp > i)
                        break;
                }
            }
        }
        cout << ans << endl;
    }
}