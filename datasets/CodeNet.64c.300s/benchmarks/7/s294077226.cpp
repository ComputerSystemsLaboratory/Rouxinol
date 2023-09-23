#include <iostream>
using namespace std;

int main(void) {
    int n, r, i, j;
    char s;
    char suits[4] = {'S', 'H', 'C', 'D'};
    int ls[4][13];
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 13; j++) {
            ls[i][j] = 0;
        }
    }
    
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> s >> r;
        if (s == 'S') j = 0;
        else if (s == 'H') j = 1;
        else if (s == 'C') j = 2;
        else j = 3;
        ls[j][r-1] = 1;
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 13; j++) {
            if (!ls[i][j]) cout << suits[i] << " " << j + 1 << endl;
        }
    }
    return 0;
}