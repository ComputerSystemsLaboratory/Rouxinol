#include <iostream>
#include <string>

using namespace std;

class Dice{
    public:
        int dice[6];
        int buf1, buf2, buf3;
        void north(){
            buf1 = dice[0];
            buf2 = dice[1];
            buf3 = dice[5];
            dice[5] = dice[4];
            dice[0] = buf2;
            dice[4] = buf1;
            dice[1] = buf3;
        }
        void south(){
            buf1 = dice[0];
            buf2 = dice[1];
            buf3 = dice[5];
            dice[0] = dice[4];
            dice[1] = buf1;
            dice[5] = buf2;
            dice[4] = buf3;
        }
        void west(){
            buf1 = dice[0];
            buf2 = dice[2];
            buf3 = dice[5];
            dice[0] = buf2;
            dice[2] = buf3;
            dice[5] = dice[3];
            dice[3] = buf1;
        }
        void east(){
            buf1 = dice[0];
            buf2 = dice[2];
            buf3 = dice[5];
            dice[2] = buf1;
            dice[5] = buf2;
            dice[0] = dice[3];
            dice[3] = buf3;
        }
};



int main(){

    string D;
    string::iterator itr;

    Dice d;

    for(int i=0; i<6; i++){
        cin >> d.dice[i];
    }
    cin >>D;
    char dir;

    for(itr = D.begin(); itr != D.end(); itr++){
       dir = *itr;
       if(dir == 'N') d.north();
       if(dir == 'S') d.south();
       if(dir == 'W') d.west();
       if(dir == 'E') d.east();
    } 

    cout << d.dice[0] << endl;

    return 0;
}