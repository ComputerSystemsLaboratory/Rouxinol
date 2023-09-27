#include <iostream>
#include <cstring>
#include <utility>
using namespace std;

typedef pair<int, int> pii;

int main(void) {

    while (1) {
        int N; cin >> N;
        if (N == 0) break;
        int masu[21][21];
        memset(masu, 0, sizeof(masu));

        for (int i = 0; i < N; i++) {
            int x, y; cin >> x >> y;
            masu[y][x] = 1;
        }

        int M; cin >> M;
        pii pos = pii(10, 10);      // ???????????????????????????
        for (int i = 0; i < M; i++) {
            char dir;
            int dis;
            cin >> dir >> dis;

            switch (dir) {
            case 'N':
                for (int j = 0; j < dis; j++) {
                    pos.second++;
                    if (masu[pos.second][pos.first] == 1) {
                        masu[pos.second][pos.first] = -1;
                        N--;
                    }
                }
                break;
            case 'E':
                for (int j = 0; j < dis; j++) {
                    pos.first++;
                    if (masu[pos.second][pos.first] == 1) {
                        masu[pos.second][pos.first] = -1;
                        N--;
                    }
                }
                break;
            case 'S':
                for (int j = 0; j < dis; j++) {
                    pos.second--;
                    if (masu[pos.second][pos.first] == 1) {
                        masu[pos.second][pos.first] = -1;
                        N--;
                    }
                }
                break;
            case 'W':
                for (int j = 0; j < dis; j++) {
                    pos.first--;
                    if (masu[pos.second][pos.first] == 1) {
                        masu[pos.second][pos.first] = -1;
                        N--;
                    }
                }
                break;
            }
        }

        if (N > 0) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

    return 0;
}