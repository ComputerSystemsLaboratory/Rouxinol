#include <iostream>
#include <string>
const int SURFACE_NUM = 6;
enum Direction{TOP, SOUTH, EAST, WEST, NORTH, BOTTOM};

class Dice{
public:
    void roll(char op);
    int top(){
        return label_value[label_dir[TOP]];
    }
    Dice(int label_value[SURFACE_NUM]);
    int getright(int top, int front);
    void resetDirection();
private:
    Direction label_dir[SURFACE_NUM];//lavel_dir[dir] は 方角dirの面p
    int label_value[SURFACE_NUM];//label_value[p] は 面pの数値
};

Dice::Dice(int lv[SURFACE_NUM]){
    for(int i = 0; i < SURFACE_NUM; i++) Dice::label_value[i] = lv[i];
    resetDirection();
}

void Dice::roll(char op){
    Direction tmp;
    switch(op){
    case 'E':
        tmp = label_dir[BOTTOM];
        label_dir[BOTTOM] = label_dir[EAST];
        label_dir[EAST] = label_dir[TOP];
        label_dir[TOP] = label_dir[WEST];
        label_dir[WEST] = tmp;
        break;
    case 'N':
        tmp = label_dir[NORTH];
        label_dir[NORTH] = label_dir[TOP];
        label_dir[TOP] = label_dir[SOUTH];
        label_dir[SOUTH] = label_dir[BOTTOM];
        label_dir[BOTTOM] = tmp;
        break;
    case 'S':
        tmp = label_dir[BOTTOM];
        label_dir[BOTTOM] = label_dir[SOUTH];
        label_dir[SOUTH] = label_dir[TOP];
        label_dir[TOP] = label_dir[NORTH];
        label_dir[NORTH] = tmp;
        break;
    case 'W':
        tmp = label_dir[EAST];
        label_dir[EAST] = label_dir[BOTTOM];
        label_dir[BOTTOM] = label_dir[WEST];
        label_dir[WEST] = label_dir[TOP];
        label_dir[TOP] = tmp;
        break;
    }
}

int Dice::getright(int top, int front){
    //前面を確定
    if(front != label_value[label_dir[SOUTH]]){
        if(front == label_value[label_dir[WEST]]){
            roll('E');
            roll('S');
        }else if(front == label_value[label_dir[EAST]]){
            roll('W');
            roll('S');
        }else{
            do{
                roll('S');
            }while(front != label_value[label_dir[SOUTH]]);
        }
    }
    
    //上面を確定
    while(top != label_value[label_dir[TOP]]) roll('E');
    
    return label_value[label_dir[EAST]];
}

void Dice::resetDirection(){
    for(int i = 0; i < SURFACE_NUM; i++) Dice::label_dir[i] = static_cast<Direction>(i);
    /*
    label_dir[0] = label_dir[TOP] = 0;//面0
    label_dir[1] = label_dir[SOUTH] = 1;//面1
    ...
    label_dir[5] = label_dir[BOTTOM] = 5;//面5
    */
}

int main(){
    using namespace std;
    int dice_value[SURFACE_NUM];
    for(int i = 0; i < SURFACE_NUM; i++) cin >> dice_value[i];
    Dice d(dice_value);
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int front, top;
        cin >> top >> front;
        d.resetDirection();
        cout << d.getright(top, front) << endl;
    }
    
    return 0;
}
