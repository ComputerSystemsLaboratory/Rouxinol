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
    
    string txt;
    cin >> txt;
    
    while(txt.size()>0){
        char c = txt[0];
        txt = txt.substr(1);
        
        if(c == 'N')
            d.N();
        else if(c == 'S')
            d.S();
        else if(c == 'W')
            d.W();
        else if(c == 'E')
            d.E();
    }
    
    d.printTop();

}