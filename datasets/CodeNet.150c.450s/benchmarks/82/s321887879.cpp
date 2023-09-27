#include <iostream>
using namespace std;

class Dice{
    int _num[6];
  public:
    void set(int num[6]){
        for(int i=0;i<6;i++){
            _num[i] = num[i];
        }
    }
    void printTop(){
        cout << _num[0] << endl;
    }
    void printRight(){
        cout << _num[2] << endl;
    }
    void N(){
        int buf = _num[0];
        _num[0] = _num[1];
        _num[1] = _num[5];
        _num[5] = _num[4];
        _num[4] = buf;
    }
    void S(){
        int buf = _num[0];
        _num[0] = _num[4];
        _num[4] = _num[5];
        _num[5] = _num[1];
        _num[1] = buf;
    }
    void W(){
        int buf = _num[0];
        _num[0] = _num[2];
        _num[2] = _num[5];
        _num[5] = _num[3];
        _num[3] = buf;
    }
    void E(){
        int buf = _num[0];
        _num[0] = _num[3];
        _num[3] = _num[5];
        _num[5] = _num[2];
        _num[2] = buf;
    }
    void SetTop(int n){
        if(_num[2]==n)
            W();
        else if(_num[3]==n)
            E();
        else{
            while(true){
                if(_num[0]==n)
                    break;
                S();
            }
        }
    }
    void SetFront(int n){
            while(true){
                if(_num[1]==n)
                    break;
                S();
                W();
                N();
            }
    }
};

int main(void){
    int num[6];
    for(int i=0;i<6;i++){
        int n;
        cin >> n;
        num[i] = n;
    }
    
    Dice d;
    d.set(num);
    
    int q;
    cin >> q;

    for(int i=0;i<q;i++){
        int t,f;
        cin >> t >> f;

        d.SetTop(t);
        d.SetFront(f);
        
        d.printRight();
    }
    

    return 0;
}