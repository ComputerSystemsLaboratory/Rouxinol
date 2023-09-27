#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    vector<int> dice;
    string roll;
    int roll_len, tmp;
    dice.resize(6);
    cin >> dice[0] >> dice[1] >> dice[2] >> dice[3] >> dice[4] >> dice[5] >> roll;
    roll_len = roll.length();
    for (int i=0; i<roll_len; ++i){
        if(roll[i] == 'S'){
            tmp = dice[0];
            dice[0] = dice[4];
            dice[4] = dice[5];
            dice[5] = dice[1];
            dice[1] = tmp;
        }
        else if(roll[i] == 'N'){
            tmp = dice[0];
            dice[0] = dice[1];
            dice[1] = dice[5];
            dice[5] = dice[4];
            dice[4] = tmp;
        }
        if(roll[i] == 'W'){
            tmp = dice[0];
            dice[0] = dice[2];
            dice[2] = dice[5];
            dice[5] = dice[3];
            dice[3] = tmp;
        }
        if(roll[i] == 'E'){
            tmp = dice[0];
            dice[0] = dice[3];
            dice[3] = dice[5];
            dice[5] = dice[2];
            dice[2] = tmp;
        }
    }
    cout << dice[0] << endl;
    return 0;
}

