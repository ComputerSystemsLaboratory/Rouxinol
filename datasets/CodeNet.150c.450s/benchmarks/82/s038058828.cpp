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

vector<int> rotate_x(vector<int> dice){
    int tmp1, tmp2, tmp3, tmp4;
    tmp1=dice[0]; tmp2=dice[1]; tmp3=dice[4]; tmp4=dice[5];
    dice[0]=tmp2; dice[1]=tmp4; dice[4]=tmp1; dice[5]=tmp3;
    return dice;
}

vector<int> rotate_y(vector<int> dice){
    int tmp1, tmp2, tmp3, tmp4;
    tmp1=dice[1]; tmp2=dice[2]; tmp3=dice[3]; tmp4=dice[4];
    dice[1]=tmp3; dice[2]=tmp1; dice[3]=tmp4; dice[4]=tmp2;
    return dice;
}

vector<int> rotate_z(vector<int> dice){
    int tmp1, tmp2, tmp3, tmp4;
    tmp1=dice[0]; tmp2=dice[2]; tmp3=dice[3]; tmp4=dice[5];
    dice[0]=tmp3; dice[2]=tmp1; dice[3]=tmp4; dice[5]=tmp2;
    return dice;
}

int getIndex(vector<int> dice, int n){
    int index;
    for(int i=0; i<6; i++){
        if(dice[i]==n){
            index = i;
            break;
        }
    }
    return index;
}


int main(){

    vector<int> dice(6);
    vector<int> r_dice(6);
    for(int i=0; i<6; i++){
        cin >> dice[i];
    }
    int q;
    cin >> q;


    for(int i=0; i<q; i++){
        // 回転させるサイコロの宣言
        // 初期のサイコロdiceはそのまま保持したい
        r_dice = dice;
        int top, frt, top_index, frt_index;

        // top front に持っていきたい数
        cin >> top >> frt;
        top_index = getIndex(r_dice, top);
        frt_index = getIndex(r_dice, frt);
        switch (top_index) {
            case 0:
                for(int j=0; j<4; j++){
                    if(frt == r_dice[1]){
                        break;
                    }
                    r_dice = rotate_y(r_dice);
                }
                break;
            case 1:
                r_dice = rotate_x(r_dice);
                for(int j=0; j<4; j++){
                    if(frt == r_dice[1]){
                        break;
                    }
                    r_dice = rotate_y(r_dice);
                }
                break;
            case 2:
                r_dice = rotate_z(r_dice);
                r_dice = rotate_z(r_dice);
                r_dice = rotate_z(r_dice);
                for(int j=0; j<4; j++){
                    if(frt == r_dice[1]){
                        break;
                    }
                    r_dice = rotate_y(r_dice);
                }
                break;
            case 3:
                r_dice = rotate_z(r_dice);
                for(int j=0; j<4; j++){
                    if(frt == r_dice[1]){
                        break;
                    }
                    r_dice = rotate_y(r_dice);
                }
                break;
            case 4:
                r_dice = rotate_x(r_dice);
                r_dice = rotate_x(r_dice);
                r_dice = rotate_x(r_dice);
                for(int j=0; j<4; j++){
                    if(frt == r_dice[1]){
                        break;
                    }
                    r_dice = rotate_y(r_dice);
                }
                break;
            case 5:
                r_dice = rotate_x(r_dice);
                r_dice = rotate_x(r_dice);
                for(int j=0; j<4; j++){
                    if(frt == r_dice[1]){
                        break;
                    }
                    r_dice = rotate_y(r_dice);
                }
                break;
        }
        // 2はサイコロのみ
        cout << r_dice[2] << endl;

    }


    return 0;
}

