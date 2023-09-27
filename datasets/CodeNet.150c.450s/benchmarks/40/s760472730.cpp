#include <iostream>
using namespace std;
struct dice{
    int x[6];
    
    void roll(char c){
        int tmp;
        if(c == 'E'){
            tmp = x[0];
            x[0] = x[3];
            x[3] = x[5];
            x[5] = x[2];
            x[2] = tmp;
        }
        if(c == 'N'){
            tmp = x[0];
            x[0] = x[1];
            x[1] = x[5];
            x[5] = x[4];
            x[4] = tmp;
        }
        if(c == 'S'){
            tmp = x[0];
            x[0] = x[4];
            x[4] = x[5];
            x[5] = x[1];
            x[1] = tmp;
        }
        if(c == 'W'){
            tmp = x[0];
            x[0] = x[2];
            x[2] = x[5];
            x[5] = x[3];
            x[3] = tmp;
        }
    }
    int top(){
        return x[0];
    }
};

int main(void){
    dice d;
    for(int i = 0; i < 6; i++){
        cin >> d.x[i];
    }
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        d.roll(s[i]);    
    }
    cout << d.top() << endl;

    return 0;
}

