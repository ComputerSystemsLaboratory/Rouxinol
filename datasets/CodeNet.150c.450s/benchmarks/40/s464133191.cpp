#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <typeinfo>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

vector<int> rollDice(char c, vector<int> dice){
    int tmp1, tmp2, tmp3, tmp4;
    switch (c) {
        case 'N':
            tmp1=dice[0]; tmp2=dice[1]; tmp3=dice[4]; tmp4=dice[5];
            dice[0]=tmp2; dice[1]=tmp4; dice[4]=tmp1; dice[5]=tmp3;
            break;
        case 'W':
            tmp1=dice[0]; tmp2=dice[2]; tmp3=dice[3]; tmp4=dice[5];
            dice[0]=tmp2; dice[2]=tmp4; dice[3]=tmp1; dice[5]=tmp3;
            break;
        case 'S':
            tmp1=dice[0]; tmp2=dice[1]; tmp3=dice[4]; tmp4=dice[5];
            dice[0]=tmp3; dice[1]=tmp1; dice[4]=tmp4; dice[5]=tmp2;
            break;
        case 'E':
            tmp1=dice[0]; tmp2=dice[2]; tmp3=dice[3]; tmp4=dice[5];
            dice[0]=tmp3; dice[2]=tmp1; dice[3]=tmp4; dice[5]=tmp2;
            break;
    }
    return dice;
}


int main(){

    vector<int> dice(6);
    for(int i=0; i<6; i++){
        cin >> dice[i];
    }

    string cmds;
    cin >> cmds;
    for(int i=0; i<cmds.size(); i++){
        char c = cmds[i];
        dice = rollDice(c, dice);

    }

    cout << dice[0] << endl;

    return 0;
}

