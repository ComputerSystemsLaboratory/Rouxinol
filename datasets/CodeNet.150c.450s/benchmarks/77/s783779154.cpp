#include <iostream>
#include <set>
#include <vector>
#include <tuple>
#include <string>

using namespace std;

const vector<int> dx = {0, 1, 0, -1};
const vector<int> dy = {1, 0, -1, 0};

int main() {
    int N;

    for (;;) {
        cin >> N;
        if (N == 0) break;

        set<tuple<int, int>> stii;
        for (int i = 0; i < N; i++) {
            int x, y;
            cin >> x >> y;

            stii.insert(make_tuple(x, y));
        }

        int M, cx = 10, cy = 10;
        cin >> M;
        for (int i = 0; i < M; i++) {
            string d;
            int l, di = 0;
            cin >> d >> l;

            if (d == "N") di = 0;
            else if (d == "E") di = 1;
            else if (d == "S") di = 2;
            else if (d == "W") di = 3;

            for (int j = 0; j < l; j++) {
                cx += dx[di];
                cy += dy[di];

                auto pos = make_tuple(cx, cy);
                auto res = stii.find(pos);
                if (res != stii.end()) {
                    stii.erase(res);
                }
            }
        }

        if (stii.empty()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}