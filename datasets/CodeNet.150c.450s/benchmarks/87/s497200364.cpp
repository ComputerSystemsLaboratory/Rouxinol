#include <iostream>
using namespace std;

    int H;
    int P[10][5]; //パズル
    int score; //総得点
    int check; //連続した玉があるか

void renzoku_check() 
{
    for (int i = 0; i < H; i++) {
        if ((P[i][0] == P[i][1]) && (P[i][0] == P[i][2]) && (P[i][0] != P[i][3]) && (P[i][0] != 0)) {
            score += 3*P[i][0];
            P[i][0] = 0;
            P[i][1] = 0;
            P[i][2] = 0;
            check = 1;
        }
        if ((P[i][0] == P[i][1]) && (P[i][0] == P[i][2]) && (P[i][0] == P[i][3]) && (P[i][0] != P[i][4]) && (P[i][0] != 0)) {
            score += 4*P[i][0];
            P[i][0] = 0;
            P[i][1] = 0;
            P[i][2] = 0;
            P[i][3] = 0;
            check = 1;
        }
        if ((P[i][0] == P[i][1]) && (P[i][0] == P[i][2]) && (P[i][0] == P[i][3]) && (P[i][0] == P[i][4]) && (P[i][0] != 0)) {
            score += 5*P[i][0];
            P[i][0] = 0;
            P[i][1] = 0;
            P[i][2] = 0;
            P[i][3] = 0;
            P[i][4] = 0;
            check = 1;
        }
        if ((P[i][1] == P[i][2]) && (P[i][1] == P[i][3]) && (P[i][0] != P[i][2]) && (P[i][4] != P[i][2]) && (P[i][1] != 0)) {
            score += 3*P[i][1];
            P[i][1] = 0;
            P[i][2] = 0;
            P[i][3] = 0;
            check = 1;
        }
        if ((P[i][1] == P[i][2]) && (P[i][1] == P[i][3]) && (P[i][1]== P[i][4]) && (P[i][0] != P[i][1]) && (P[i][1] != 0)) {
            score += 4*P[i][1];
            P[i][1] = 0;
            P[i][2] = 0;
            P[i][3] = 0;
            P[i][4] = 0;
            check = 1;
        }
        if ((P[i][2] == P[i][3]) && (P[i][2] == P[i][4]) && (P[i][1] != P[i][2]) && (P[i][2] != 0)) {
            score += 3*P[i][2];
            P[i][2] = 0;
            P[i][3] = 0;
            P[i][4] = 0;
            check = 1;
        }
    }
}

void drow()
{
    for (int i = 1; i < H; i++) {
        for (int j = 0; j < 5; j++) {
            if (P[i][j] == 0) {
                for (int k = i; k > 0; k--) {
                    P[k][j] = P[k-1][j];
                }
                P[0][j] = 0;
            }
        }
    }
}

int main()
{
    while(1)
    {
        cin >> H;
        if (H == 0) {
            break;
        }
        for (int i = 0; i < H; i++) { //パズル初期化
            for (int j = 0; j < 5; j++) {
                cin >> P[i][j];
            }
        }
        score = 0;

        while(1)
        {
            check = 0;
            renzoku_check();
            if (check == 0) break;
            drow();
        }
        
        cout << score << endl;


    }
}
