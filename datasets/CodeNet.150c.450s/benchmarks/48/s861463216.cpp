#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

ll e, m, x, min_;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    while (cin >> e, e) {
        min_ = m = (int)(1e9 + 7);

        for (int y = 0; y <= sqrt((double)e); y++) {
            for (int z = 0; z <= sqrt((double)e); z++) {
                x = e - y * y - z * z * z;
                if (x < 0) break;
                else {
                    m = x + y + z;
                    //cout << "x, m = " << x << " " << m << endl;
                    if (min_ > m) min_ = m;
                }
            }
        }

        cout << min_ << endl;
    }

    return 0;
}