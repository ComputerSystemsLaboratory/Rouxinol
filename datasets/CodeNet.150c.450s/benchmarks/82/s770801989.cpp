#include <iostream>
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
    int q;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
    dice.n1 = n1;
    dice.n2 = n2;
    dice.n3 = n3;
    dice.n4 = n4;
    dice.n5 = n5;
    dice.n6 = n6;
    
    cin >> q;
    for(int i=0; i<q; i++){
        int a, b;
        cin >> a >> b;
        if(b == dice.n1){
            dice.South();
        }else if(b == dice.n3){
            dice.West();
            dice.South();
        }else if(b == dice.n4){
            dice.East();
            dice.South();
        }else if(b == dice.n5){
            dice.South();
            dice.South();
        }else if(b == dice.n6){
            dice.North();
        }
        if(a == dice.n3){
            dice.West();
        }else if(a == dice.n4){
            dice.East();
        }else if(a == dice.n6){
            dice.East();
            dice.East();
        }
        cout << dice.n3 << endl;
    }
    return 0;
}