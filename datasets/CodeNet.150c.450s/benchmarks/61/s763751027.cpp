#include <iostream>
#include <vector>

using namespace std;

int main()
{
    while (true) {
        int n, a, b, c, x;
        cin >> n >> a >> b >> c >> x;

        if (n == 0 && a == 0 && b == 0 && c == 0 && x == 0) {
            return 0;
        }

        vector<int> ys;
        for (int i = 0; i < n; ++i) {
            int y;
            cin >> y;
            ys.push_back(y);
        }

        int x_ = x;
        auto lcg = [a, b, c, &x_] {
            auto x__ = x_;
            x_ = (a * x_ + b) % c;
            return x__;
        };

        int count = 0;
        for (int i = 0; i < n; ++i) {
            while (true) {
                auto xx = lcg();
                count += 1;
                if (ys[i] == xx) {
                    break;
                }
                if (count > 10000) {
                    count = -1;
                    break;
                }
            }
            if (count == -1) {
                break;
            }
        }
        cout << (count == -1 ? count : count - 1) << endl;
    }
}