#include <bits/stdc++.h>
using namespace std;

class Dice{
public:
    int s[6];
    // s[0] : top
    // s[1] : south  front
    // s[2] ; east  right
    // s[3] : west  left
    // s[4] : north  back
    // s[5] : bottom
    void roll(char c){
        //  N
        // W E
        //  S
        int b;
        if(c == 'E'){
            b = s[0]; s[0] = s[3]; s[3] = s[5]; s[5] = s[2]; s[2] = b;
        }
        if(c == 'W'){
            b = s[0]; s[0] = s[2]; s[2] = s[5]; s[5] = s[3]; s[3] = b;
        }
        if(c == 'N'){
            b = s[0]; s[0] = s[1]; s[1] = s[5]; s[5] = s[4]; s[4] = b;
        }
        if(c == 'S'){
            b = s[0]; s[0] = s[4]; s[4] = s[5]; s[5] = s[1]; s[1] = b;
        }
        // clock rotate
        if(c == 'R'){
            b = s[1]; s[1] = s[2]; s[2] = s[4]; s[4] = s[3]; s[3] = b;
        }
        // counter clock rotate
        if(c == 'L'){
            b = s[1]; s[1] = s[3]; s[3] = s[4]; s[4] = s[2]; s[2] = b;
        }
    }
    int hash(){
        int res = 0;
        for(int i = 0; i < 6; i++) res = res * 256 + s[i];
        return res;
    }
};

int main(){
    Dice d;
    for(int i = 0; i < 6; i++){
        cin >> d.s[i];
    }
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        d.roll(s[i]);
    }
    cout << d.s[0] << endl;
}
