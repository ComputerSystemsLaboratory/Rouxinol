#include <iostream>
using namespace std;
int main(void){
    int n, a, b, c, x;
    while (cin >> n >> a >> b >> c >> x && n) {
        int f = -1;
        for (int i = 0; i < n; ++i) {
            int r;
            cin >> r;
            while (x != r && f <= 10000) {
                ++f;
                x = (a * x + b) % c;
            }
            ++f;
            x = (a * x + b) % c;
        }
        if (f <= 10000)
            cout << f << endl;
        else
            cout << -1 << endl;
    }
}