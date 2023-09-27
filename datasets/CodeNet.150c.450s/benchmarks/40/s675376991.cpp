#include <iostream>
#include <string>
using namespace std;
class Dice{
public:
    int n1,n2,n3,n4,n5,n6;
    
    void East(){
        int t = n1;
        n1 = n4;
        n4 = n6;
        n6 = n3;
        n3 = t;
    }
    void West(){
        int t = n1;
        n1 = n3;
        n3 = n6;
        n6 = n4;
        n4 = t;
    }
    void South(){
        int t=n1;
        n1 = n5;
        n5 = n6;
        n6 = n2;
        n2 = t;
    }
    void North(){
        int t=n1;
        n1 = n2;
        n2 = n6;
        n6 = n5;
        n5 = t;
    }
};

int main() {
    Dice dice;
    int n1, n2, n3, n4, n5, n6;
    char ch;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
    dice.n1 = n1;
    dice.n2 = n2;
    dice.n3 = n3;
    dice.n4 = n4;
    dice.n5 = n5;
    dice.n6 = n6;
    while(cin >> ch){
        if(ch=='E'){
            dice.East();
        }
        else if(ch=='W'){
            dice.West();
        }
        else if(ch=='S'){
            dice.South();
        }
        else if(ch=='N'){
            dice.North();
        }
    }
    cout << dice.n1 << endl;
    return 0;
}