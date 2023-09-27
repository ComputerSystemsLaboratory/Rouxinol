#include <iostream>
using namespace std;

int main() {
    int n, m, l;
    cin >> n >> m >> l;
    long mt1[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mt1[i][j];
        }
    }

    long mt2[m][l];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cin >> mt2[i][j];
        }
    }

    long mt;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            mt = 0;
            for (int k = 0; k < m; k++) {
                mt += (mt1[i][k] * mt2[k][j]);
            }
            if (j < l - 1) {
                cout << mt << " ";
            }
            else {
                cout << mt << endl;
            }
        }
    }
}
