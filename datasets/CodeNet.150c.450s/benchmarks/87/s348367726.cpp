#include <iostream>

using namespace std;

class Solver {
    public:
        int h;
        int num[10][5];
        int solve() {
            bool has_changed = true;
            int score = 0;
            while (has_changed) {
                has_changed = false;
                for (int y = 0; y < h; ++y) {
                    for (int x = 0; x < 5; ++x) {
                        if (num[y][x] == 0) {
                            continue;
                        }
                        for (int x2 = x + 1; x2 <= 5; ++x2) {
                            if (x2 != 5 && num[y][x2] == num[y][x]) {
                                continue;
                            }
                            if (x2 - x > 2) {
                                has_changed = true;
                                for (int x3 = x; x3 < x2; ++x3) {
                                    score += num[y][x3];
                                    num[y][x3] = 0;
                                }
                            }
                            break;
                        }
                    }
                }
                for (int x = 0; x < 5; ++x) {
                    for (int y = h - 1; y >= 0; --y) {
                        if (num[y][x] > 0) {
                            continue;
                        }
                        for (int y2 = y; y2 >= 0; --y2) {
                            if (num[y2][x] > 0) {
                                num[y][x] = num[y2][x];
                                num[y2][x] = 0;
                                break;
                            }
                        }
                    }
                }
            }
            return score;
        }
};

int main() {
    Solver s;
    while (true) {
        cin >> s.h;
        if (s.h == 0) {
            return 0;
        }
        for (int y = 0; y < s.h; ++y) {
            for (int x = 0; x < 5; ++x) {
                cin >> s.num[y][x];
            }
        }
        cout << s.solve() << endl;
    }
}