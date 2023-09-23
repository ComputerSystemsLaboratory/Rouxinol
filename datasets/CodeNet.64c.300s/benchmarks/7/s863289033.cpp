#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char marks[4] = {'S', 'H', 'C', 'D'};

    bool cards[4][13] = {};
    for (int i = 0; i < n; i++) {
        char mark;
        int rank;
        cin >> mark >> rank;
        int x;
        if (mark == 'S') x = 0;
        else if (mark == 'H') x = 1;
        else if (mark == 'C') x = 2;
        else x = 3;
        cards[x][rank - 1] = true;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            if (!cards[i][j]) cout << marks[i] << ' ' << j + 1 << endl;
        }
    }
}