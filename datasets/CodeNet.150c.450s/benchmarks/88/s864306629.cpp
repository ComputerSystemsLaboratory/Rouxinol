#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct S {
    int y, x;
    int d2() const {
        return y * y + x * x;
    }
    S(int y, int x) : y(y), x(x) {}
    bool operator<(const S &b) const {
        S a = (*this);
        int da = a.d2();
        int db = b.d2();
        if (da == db) return a.y < b.y;
        return da < db;
    }
};


ostream& operator<<(ostream& os, S a) {
    os << a.y << " " << a.x;
    return os;
}

int main() {
    int h, w;
    while (cin >> h >> w, h || w) {
        S s(h, w);
        S ans = S(1000, 1000);
        for (int h1 = 1; h1 <= 150; h1++) {
            for (int w1 = 1; w1 <= 150; w1++) {
                if (h1 >= w1) continue;
                S c(h1, w1);
                if (s < c) {
                    ans = min(ans, c);
                }
            }
        }
        cout << ans << endl;
    }
}