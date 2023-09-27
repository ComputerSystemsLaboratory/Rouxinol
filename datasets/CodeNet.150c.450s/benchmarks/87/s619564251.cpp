#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int H;
    while (cin >> H, H) {
        vector<vector<int>> field(H, vector<int>(6, -1));

        for (int y = 0; y < H; ++y) {
            for (int x = 0; x < 5; ++x) {
                cin >> field[y][x];
            }
        }

        int score = 0;
        for (;;) {
            vector<vector<bool>> deleted(H, vector<bool>(6));
            bool done = true;

            for (int y = 0; y < H; ++y) {
                int run = 1;
                for (int x = 1; x < 6; ++x) {
                    if (field[y][x] == field[y][x-1]) {
                        ++run;
                    } else {
                        if (field[y][x-1] != 0 && run >= 3) {
                            score += field[y][x-1] * run;
                            done = false;
                            for (int k = 1; k <= run; ++k)
                                deleted[y][x-k] = true;
                        }
                        run = 1;
                    }
                }
            }

            for (int x = 0; x < 5; ++x) {
                int p = H-1;
                for (int y = H-1; y >= 0; --y) {
                    if (!deleted[y][x]) {
                        field[p][x] = field[y][x];
                        --p;
                    }
                }
                for ( ; p >= 0; --p)
                    field[p][x] = 0;
            }

            if (done)
                break;
        }

        cout << score << endl;
    }
}