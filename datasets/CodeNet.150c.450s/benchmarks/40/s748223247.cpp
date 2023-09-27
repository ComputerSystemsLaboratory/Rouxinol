#include <iostream>
#include <string>
using namespace std;

int main() {
//    freopen("in.txt", "r", stdin);
    int dice[4][4] = {0};
    int tmp;
    string movitation;
    cin >> dice[2][3] >> dice[3][1] >> dice[2][2]
        >> dice[2][0] >> dice[1][1] >> dice[2][1];
    dice[0][1] = dice[2][3];

    cin >> movitation;
    for (int i = 0; i < movitation.length(); ++i) {
        if (movitation[i] == 'S') {
            tmp = dice[0][1];
            dice[0][1] = dice[1][1];
            dice[1][1] = dice[2][1];
            dice[2][1] = dice[3][1];
            dice[3][1] = tmp;

            dice[2][3] = dice[0][1];
        } else if (movitation[i] == 'N') {
            tmp = dice[3][1];
            dice[3][1] = dice[2][1];
            dice[2][1] = dice[1][1];
            dice[1][1] = dice[0][1];
            dice[0][1] = tmp;

            dice[2][3] = dice[0][1];
        } else if (movitation[i] == 'W') {
            tmp = dice[2][3];
            dice[2][3] = dice[2][2];
            dice[2][2] = dice[2][1];
            dice[2][1] = dice[2][0];
            dice[2][0] = tmp;

            dice[0][1] = dice[2][3];
        } else if (movitation[i] == 'E') {
            tmp = dice[2][0];
            dice[2][0] = dice[2][1];
            dice[2][1] = dice[2][2];
            dice[2][2] = dice[2][3];
            dice[2][3] = tmp;

            dice[0][1] = dice[2][3];
        }
    }
    cout << dice[2][3] << endl;
}