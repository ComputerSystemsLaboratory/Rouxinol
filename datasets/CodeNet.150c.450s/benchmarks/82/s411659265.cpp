#include <iostream>
#include <string>

using namespace std;

class Dice{
    public:
        int dice[6];
        int buf;
        void north(){
            buf = dice[0];
            dice[0] = dice[1];
            dice[1] = dice[5];
            dice[5] = dice[4];
            dice[4] = buf;
        }
        void south(){
            buf = dice[0];
            dice[0] = dice[4];
            dice[4] = dice[5];
            dice[5] = dice[1];
            dice[1] = buf;
        }
        void east(){
            buf = dice[0];
            dice[0] = dice[3];
            dice[3] = dice[5];
            dice[5] = dice[2];
            dice[2] = buf;
        }
        void west(){
            buf = dice[0];
            dice[0] = dice[2];
            dice[2] = dice[5];
            dice[5] = dice[3];
            dice[3] = buf;
        }

        void rotate_R(){
            buf = dice[4];
            dice[4] = dice[2];
            dice[2] = dice[1];
            dice[1] = dice[3];
            dice[3] = buf;
        }
};



int main(){
    int num;
    int upper, front;
    string::iterator itr;

    Dice d;

    for(int i=0; i<6; i++){
        cin >> d.dice[i];
    }
    cin >> num;
    for(int i=0; i<num; i++){
        cin >> upper >> front;
        for(int j=0; j<6; j++){
            if(d.dice[j] == upper){
                if(j == 0) break;
                if(j == 1) d.north();
                if(j == 2) d.west();
                if(j == 3) d.east();
                if(j == 4) d.south();
                if(j == 5){
                    d.north();
                    d.north();
                }
            }
        }
        while(1){
            if(front == d.dice[1]){
                break;
            }
            d.rotate_R();
        }
        cout << d.dice[2] << endl;
    }

    return 0;
}