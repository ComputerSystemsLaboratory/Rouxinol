#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Dice{
    public:
        void set(int num[6]);
        void change_top(int num);
        int top_number();
        int right_number();
        int front_number();
        void E(), N(), S(), W(), roll_side();
    private:
    int dice_number[6];
};

int Dice::top_number(){
    return dice_number[0];
}
int Dice::right_number(){
    return dice_number[2];
}
int Dice::front_number(){
    return dice_number[1];
}

void Dice::set(int num[6]){
    for(int i = 0; i < 6; i++) dice_number[i] = num[i];
}

void Dice::change_top(int num){
    for(int i = 0; i < 6; i++){
        if(dice_number[i] == num){
            break;
        }
    }

}
void Dice::E(){
    int tmp = dice_number[0];
    dice_number[0] = dice_number[3];
    dice_number[3] = dice_number[5];
    dice_number[5] = dice_number[2];
    dice_number[2] = tmp;
}

void Dice::N(){
    int tmp = dice_number[0];
    dice_number[0] = dice_number[1];
    dice_number[1] = dice_number[5];
    dice_number[5] = dice_number[4];
    dice_number[4] = tmp;
}
void Dice::S(){
    int tmp = dice_number[0];
    dice_number[0] = dice_number[4];
    dice_number[4] = dice_number[5];
    dice_number[5] = dice_number[1];
    dice_number[1] = tmp;
}
void Dice::W(){
    int tmp = dice_number[0];
    dice_number[0] = dice_number[2];
    dice_number[2] = dice_number[5];
    dice_number[5] = dice_number[3];
    dice_number[3] = tmp;
}
void Dice::roll_side(){
    int tmp = dice_number[1];
    dice_number[1] = dice_number[2];
    dice_number[2] = dice_number[4];
    dice_number[4] = dice_number[3];
    dice_number[3] = tmp;
}

int main(){
    Dice dice1;
    int dice_num[6], q, top, front;
    char order[100];
    for (int i = 0; i < 6; i++ ) cin >> dice_num[i];
    dice1.set( dice_num );

    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> top >> front;
        for (int j = 0; j < 4; j++){//4回回転させると上か正面のどちらかに当てはまる
            if(dice1.top_number() == top){
                for(int k = 0; k < 4; k++){
                    if(dice1.front_number() == front){
                        cout << dice1.right_number() << endl;
                        break;
                    }
                    dice1.roll_side();
                }
                break;
            }else if(dice1.front_number() == front){
                for(int k = 0; k < 4; k++){
                    if(dice1.top_number() == top){
                        cout << dice1.right_number() << endl;
                        break;
                    }
                    dice1.E();
                }
                break;
            }
            dice1.N();//N方向に回転
        }
    }
    return 0;
}
