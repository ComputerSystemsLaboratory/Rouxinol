#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int r, c;
    int hyou[101][101] = {};
    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            cin >> hyou[i][j];
            sum += hyou[i][j];
        }
        hyou[i][c] = sum;
    }

    for (int j = 0; j <= c; j++) {
        int sum = 0;
        for (int i = 0; i <= r; i++) {
            sum += hyou[i][j];
        }
        hyou[r][j] = sum;
    }

    for (int i = 0; i <= r; i++) {
        for (int j = 0; j <= c; j++) {
            cout << hyou[i][j];
            if (j != c) cout << " ";
        }

        cout << endl;
    }
}