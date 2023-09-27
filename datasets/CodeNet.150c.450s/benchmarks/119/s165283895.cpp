#include <functional>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    while (true) {
        int w, h;
        cin >> w >> h;
        if (w == 0 && h == 0) {
            return 0;
        }
        vector<vector<int>> v(h, vector<int>(w, -1));
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                cin >> v[i][j];
            }
        }
        constexpr int MIN_ID = 10;
        function<int(int, int, int)> f = [&v, &f, w, h, MIN_ID](int i, int j,
                                                                int id) {
            // ?????¢????¶???????
            if (i == -1 || j == -1 || i == h || j == w) {
                return 0;
            }
            // ?????§?????¶????±?????????????
            else if (MIN_ID <= v[i][j] && v[i][j] <= id) {
                return 0;
            }
            // ???
            else if (v[i][j] == 0) {
                return 0;
            }
            else {
                v[i][j] = id;
                int r = 1;
                r += f(i - 1, j - 1, id);
                r += f(i - 1, j, id);
                r += f(i - 1, j + 1, id);
                r += f(i, j - 1, id);
                r += f(i, j + 1, id);
                r += f(i + 1, j - 1, id);
                r += f(i + 1, j, id);
                r += f(i + 1, j + 1, id);
                return r;
            }
        };
        int islandId = MIN_ID;
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                auto r = f(i, j, islandId);
                if (r > 0) {
                    islandId += 1;
                }
            }
        }

        cout << (islandId - MIN_ID) << endl;
    }
}