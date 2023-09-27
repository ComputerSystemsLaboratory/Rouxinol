#include <iostream>
#include <string>
using namespace std;

int c[8];

class DICE{
public:
    void setdice(char a);
};

void DICE::setdice(char a){
    if(a == 'S'){
        c[7] = c[1];
        c[1] = c[5];
        c[5] = c[6];
        c[6] = c[2];
        c[2] = c[7];
    }
    else if(a == 'W'){
        c[7] = c[1];
        c[1] = c[3];
        c[3] = c[6];
        c[6] = c[4];
        c[4] = c[7];
    }
    else if(a == 'N'){
        c[7] = c[1];
        c[1] = c[2];
        c[2] = c[6];
        c[6] = c[5];
        c[5] = c[7];
    }
    else{
        c[7] = c[1];
        c[1] = c[4];
        c[4] = c[6];
        c[6] = c[3];
        c[3] = c[7];
    }
}

int main(void){
    string std;
    DICE dice;
    for(int i = 1; i <= 6; i++){
        cin >> c[i];
    }
    cin >> std;
    for(int i = 0; i < std.size(); i++){
        dice.setdice(std[i]);
    }
    cout << c[1] << endl;
    
    return 0;
}

