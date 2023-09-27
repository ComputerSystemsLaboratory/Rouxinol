#include <iostream>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, a, b;
    while (cin >> n && n) {
        int apt = 0, bpt = 0;
        rep(i, n) {
            cin >> a >> b;
            if (a > b) {
                apt += a + b;
            }
            else if (a < b) {
                bpt += a + b;
            }
            else {
                apt += a;
                bpt += b;
            }
        }
        cout << apt << " " << bpt << endl;
    }
    return 0;
}