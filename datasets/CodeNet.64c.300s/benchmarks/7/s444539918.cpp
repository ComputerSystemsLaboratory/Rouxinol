#include<iostream>
#include<cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool cards[4][13] = {};
    char mark;
    int number;
    for (int i = 0; i < n; i++) {
        cin >> mark >> number;

        if (mark == 'S') {
           cards[0][number - 1] = true;
        } else if (mark == 'H') {
           cards[1][number - 1] = true;
        } else if (mark == 'C') {
           cards[2][number - 1] = true;
        } else if (mark == 'D') {
           cards[3][number - 1] = true;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (cards[i][j]) {
                continue;
            }

            if (i == 0) {
                cout << 'S';
            } else if (i == 1) {
                cout << 'H';
            } else if (i == 2) {
                cout << 'C';
            } else {
                cout << 'D';
            }

            cout << " " << j + 1 << endl;
        }
    }
}