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
    DICE dice;
    int n, a, b;
    for(int i = 1; i <= 6; i++){
        cin >> c[i];
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(a == c[3] || a == c[4]){
            while(c[1] != a)    dice.setdice('E');
        }
        else{
            while(c[1] != a)    dice.setdice('S');
        }
        dice.setdice('N');
        while(c[1] != b)    dice.setdice('W');
        dice.setdice('S');
        cout << c[3] << endl;
    }
    
    
    return 0;
}

