#include <iostream>
using namespace std;

int main() {
    int r, c, value;
    cin >> r >> c;
    int answer[r + 1][c + 1];

    for (int h = 0; h <= r; h++) {
        for (int i = 0; i <= c; i++) {
            answer[h][i] = 0;
        }
    }

    for (int h = 0; h < r; h++) {
        for (int i = 0; i < c; i++) {
            cin >> value;
            answer[h][i] = value;
            answer[h][c] += value;
            answer[r][i] += value;
            answer[r][c] += value;
        }
    }

    for (int h = 0; h <= r; h++) {
        for (int i = 0; i <=  c; i++) {
            cout << answer[h][i];
            if (i != c) {
                cout << " ";
            } else {
                cout << endl;
            }
        }
    }

    return 0;
}