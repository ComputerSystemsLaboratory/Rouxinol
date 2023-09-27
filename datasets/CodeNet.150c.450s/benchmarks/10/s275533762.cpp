#include <iostream>
using namespace std;

#define MAX_B 5
#define MAX_F 4
#define MAX_R 11

int main() {
    int n;             // ????????¶??°
    int b, f, r, v;    // b(?£?) : 1 ~ 4,  f(???) : 1 ~ 3, r(??¨?±?) : 1 ~ 10, v(?????°)

    int count[MAX_B][MAX_F][MAX_R];

    // ?????????
    for (int i = 0; i < MAX_B; i++)
        for (int j = 0; j < MAX_F; j++)
            for (int k = 0; k < MAX_R; k++) count[i][j][k] = 0;

    // ??\???, ??????
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b >> f >> r >> v;
        count[b][f][r] += v;
    }

    // ??????
    for (int i = 1; i < MAX_B; i++) {
        if (i > 1) cout << "####################" << endl;
        for (int j = 1; j < MAX_F; j++) {
            for (int k = 1; k < MAX_R; k++) {
                cout << " " << count[i][j][k];
            }
            cout << endl;
        }
    }

    return 0;
}