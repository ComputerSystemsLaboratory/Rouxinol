#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

bool card[4][14];
string suit = "SHCD";

int main() {
    memset(card, false, sizeof card);
    int n;
    cin >> n;
    char c; int num;
    for (int i=0; i<n; ++i) {
        cin >> c >> num;
        if (c == 'S') {
            card[0][num] = true;
        } else if (c == 'H') {
            card[1][num] = true;
        } else if (c == 'C') {
            card[2][num] = true;
        } else if (c == 'D') {
            card[3][num] = true;
        }
    }
    for (int i=0; i<4; ++i) {
        for (int j=1; j<=13; ++j) {
            if ( ! card[i][j]) {
                cout << suit[i] << " " << j << endl;
            }
        }
    }
    return 0;
}