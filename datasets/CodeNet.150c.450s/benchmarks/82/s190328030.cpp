#include <cstdio>
using namespace std;

class Dice{
    public:
    int face[6];
    Dice(){}
    int roll(int a, int b, int c, int d){
        int temp = face[a]; face[a] = face[b]; face[b] = face[c]; face[c] = face[d]; face[d] = temp;
        return 0;
    }
    int move(char c){
        if (c == 'W') roll(0, 2, 5, 3);
        if (c == 'E') roll(0, 3, 5, 2);
        if (c == 'S') roll(0, 4, 5, 1);
        if (c == 'N') roll(0, 1, 5, 4);
        return 0;
    }
};

int right(Dice dice, int top, int front){
    for (int i = 0; i <= 6; i++){
        if (dice.face[1] == front){
            for (int j = 0; j < 4; j++){
                if (dice.face[0] == top){
                    printf("%d\n", dice.face[2]);
                    return 0;
                }
                else dice.move('W');
            }
        }
        else{
            if (i == 3) dice.move('W');
            dice.move('N');
        }
    }
    return 0;
}

int main(void){
    int num_of_question, top, front;
    
    Dice dice;
    scanf("%d%d%d%d%d%d", &dice.face[0], &dice.face[1], &dice.face[2], &dice.face[3], &dice.face[4], &dice.face[5]);
    scanf("%d", &num_of_question);
    for (int i = 0; i < num_of_question; i++){
        scanf("%d%d", &top, &front);
        right(dice, top, front);
    }
    return 0;
}