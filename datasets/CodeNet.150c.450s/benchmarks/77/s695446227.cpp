#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int N;
    while (cin >> N && N != 0) {
        int gems[21][21]; // 宝石の位置を記録する配列
        memset(gems, 0, sizeof gems);

        int x, y;
        for (int i=0; i<N; ++i) {
            cin >> x >> y;
            gems[y][x] = 1;
        }

        int trace[21][21]; // 回収範囲を記録する配列
        memset(trace, 0, sizeof trace);

        int nx = 10; int ny = 10; // 初期位置

        int M; cin >> M;

        int dx[256], dy[256];
        dx['N'] = 0; dx['E'] = 1; dx['W'] = -1; dx['S'] = 0; 
        dy['N'] = 1; dy['E'] = 0; dy['W'] = 0;  dy['S'] = -1;

        for (int i=0; i<M; ++i) {
            trace[ny][nx] = 1;

            char d; cin >> d;
            int l; cin >> l;
            for (int j=0; j<l; ++j) {
                nx += dx[d];
                ny += dy[d];
                trace[ny][nx] = 1;
            }
        }

        string output = "Yes";
        for (int i=0; i<21; ++i) {
            for (int j=0; j<21; ++j) {
                if (gems[i][j] == 1 && trace[i][j] != 1) {
                    output = "No";
                }
            }
        }

        cout << output << endl;
    }
    return 0;
}