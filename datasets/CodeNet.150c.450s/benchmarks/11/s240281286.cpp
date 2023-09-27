#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)

bool card[4][14];

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        char ch;
        int x;
        cin >> ch >> x;
        if (ch == 'S')ch = 0;
        else if (ch == 'H')ch = 1;
        else if (ch == 'C')ch = 2;
        else if (ch == 'D')ch = 3;
        card[ch][x] = true;
    }

    rep(i, 4) {
        for (int j = 1; j <= 13; j++) {
            if (card[i][j] == false) {
                char r;
                if (i == 0)r = 'S';
                else if (i == 1)r = 'H';
                else if (i == 2)r = 'C';
                else if (i == 3)r = 'D';
                cout << r << ' ' << j << endl;
            }
        }
    }
}
