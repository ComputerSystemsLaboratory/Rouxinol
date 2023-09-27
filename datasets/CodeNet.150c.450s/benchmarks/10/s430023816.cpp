#include <iostream>

using namespace std;

int h[5][4][11];

int
main(int argc, const char *argv[])
{
    int n;
    int b, f, r, v;
    cin >> n;
    while (n--) {
        cin >> b >> f >> r >> v;
        h[b][f][r] += v;
    }
    for (int i = 1; i != 5; ++i) {
        if (i - 1) {
            for (int k = 1; k != 21; ++k) cout << '#';
            cout << endl;
        }
        for (int j = 1; j != 4; ++j) {
            for (int r = 1; r != 11; ++r) {
                cout << ' ' << h[i][j][r];
            }
            cout << endl;
        }
    }
    return 0;
}