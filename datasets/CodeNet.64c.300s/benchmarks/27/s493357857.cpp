#include <iostream>
 
using namespace std;
 
int main()
{
    int a, x;
    while (cin >> a >> x) {
        if (a == 0 && x == 0) break;
        int ans = 0;
        for (int i = 1; i <= a - 2; i++) {
            for (int j = i + 1; j <= a - 1; j++) {
                for (int k = j + 1; k <= a; k++) {
                    if (i + j + k == x) ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}