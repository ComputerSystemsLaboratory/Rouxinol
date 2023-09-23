#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int house[4][3][10];

int main() {
    memset(house, 0, sizeof house);
    int n, b, f, r, v;
    cin >> n;
    for (int i=0; i<n; ++i) {
        cin >> b >> f >> r >> v;
        b--; f--; r--;
        house[b][f][r] += v;
    }
    for (int i=0; i<4; ++i) {
        cout << (i == 0 ? "" : "####################\n");
        for (int j=0; j<3; ++j) {
            for (int k=0; k<10; ++k) {
                cout << " " << house[i][j][k];
            }
            cout << endl;
        }
    }
    return 0;
}