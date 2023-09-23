#include <iostream>
using namespace std;
int main() {
    int n;
    while (cin >> n && n) {
        int cnt = 0;
        for (int i=2; i<1000; ++i) {
            for (int a=1; a<1000; ++a) {
                if (((a + a + i - 1) * i) % 2 == 0 && ((a + a + i - 1) * i) / 2 == n) {
                    cnt ++;
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}