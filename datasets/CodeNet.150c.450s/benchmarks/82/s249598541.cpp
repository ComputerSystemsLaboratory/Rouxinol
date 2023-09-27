#include <iostream>
#include <string>

using namespace std;

struct Dice{
    int number[6];

    void roll(char ch){
        int nb;
        if(ch == 'E'){
            nb = number[0];
            number[0] = number[3];
            number[3] = number[5];
            number[5] = number[2];
            number[2] = nb;
        }
        if(ch == 'W'){
            nb = number[0];
            number[0] = number[2];
            number[2] = number[5];
            number[5] = number[3];
            number[3] = nb;
        }
        if(ch == 'N'){
            nb = number[0];
            number[0] = number[1];
            number[1] = number[5];
            number[5] = number[4];
            number[4] = nb;
        }
        if(ch == 'S'){
            nb = number[0];
            number[0] = number[4];
            number[4] = number[5];
            number[5] = number[1];
            number[1] = nb; 
        }
        if(ch == 'F'){
            nb = number[1];
            number[1] = number[2];
            number[2] = number[4];
            number[4] = number[3];
            number[3] = nb;
        }
    }

    int top(){
        return number[0];
    } 

    int right(){
        return number[2];
    }

    int left(){
        return number[3];
    }

    int front(){
        return number[1];
    }
};

int main(){
    Dice dice;
    for(int i = 0; i < 6; i++)
        cin >> dice.number[i];

    int q;
    cin >> q;

    
    while(q--){
        int a, b;
        cin >> a >> b;
        if(a == dice.left())
            dice.roll('E');
        if(a == dice.right())
            dice.roll('W');
        while(a != dice.top())
            dice.roll('N');
        while(b != dice.front())
            dice.roll('F');
        cout << dice.right() << endl;
    }
    
    return 0;
}
