#include <iostream>
#include <string>
using namespace std;

void EAST(int* dice) {
    int copy = dice[0];
    dice[0] = dice[3];
    dice[3] = dice[5];
    dice[5] = dice[2];
    dice[2] = copy;
}

void NORTH(int* dice) {
    int copy = dice[0];
    dice[0] = dice[1];
    dice[1] = dice[5];
    dice[5] = dice[4];
    dice[4] = copy;
}

void SOUTH(int* dice) {
    int copy = dice[0];
    dice[0] = dice[4];
    dice[4] = dice[5];
    dice[5] = dice[1];
    dice[1] = copy;
}

void WEST(int* dice) {
    int copy = dice[0];
    dice[0] = dice[2];
    dice[2] = dice[5];
    dice[5] = dice[3];
    dice[3] = copy;
}

int main(void) {
    int dice[6];
    string order;
    
    for(int i = 0; i < 6; ++i) {
        cin >> dice[i];
    }
    cin >> order;
    
    for(int i = 0; i < order.length(); ++i) {
        switch(order[i]) {
            case 'E' : EAST(dice);   break;
            case 'N' : NORTH(dice);  break;
            case 'S' : SOUTH(dice);  break;
            case 'W' : WEST(dice);   break;
        }
    }
    cout << dice[0] << endl;
    
    return 0;
}
