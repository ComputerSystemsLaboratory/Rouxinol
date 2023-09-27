#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    while (true) {
        const int e = [] {
            int e;
            cin >> e;
            return e;
        }();
        if (e == 0) {
            return 0;
        }

        int min_ = 1'000'000 + 1;
        for (int z = 0; z * z * z <= e; ++z) {
            for (int y = 0; y * y + z * z * z <= e; ++y) {
                int x = e - z * z * z - y * y;
                if (x >= 0) {
                    min_ = min(min_, x + y + z);
                }
            }
        }
        cout << min_ << endl;
    }
}
