#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
using namespace std;
 

class Dice{
public:
    int labels[6];

    Dice(int *s){
        for(int i=0;i<6;i++){
            labels[i] = s[i];
        }        
    }
    
    void update_state(char c){
        int tmp;
        switch(c){
            case 'N':
                tmp = labels[0];
                labels[0] = labels[1];
                labels[1] = labels[5];
                labels[5] = labels[4];
                labels[4] = tmp;
                break;
            case 'S':
                tmp = labels[0];
                labels[0] = labels[4];
                labels[4] = labels[5];
                labels[5] = labels[1];
                labels[1] = tmp;
                break;
            case 'W':
                tmp = labels[0];
                labels[0] = labels[2];
                labels[2] = labels[5];
                labels[5] = labels[3];
                labels[3] = tmp;
                break;
            case 'E':
                tmp = labels[0];
                labels[0] = labels[3];
                labels[3] = labels[5];
                labels[5] = labels[2];
                labels[2] = tmp;
                break;
        }
    }
};


int main(){
    int labels[6];
    for(int i=0;i<6;i++){
        cin >> labels[i];
    }
    // cout << labels[0] << endl;
    Dice dice(labels);
    // char c;
    // while(true){
    //     cin >> c;
    //     if(c=='') break;
    //     dice.update_state(c);
    // }
    string s;
    getline(cin, s);
    getline(cin, s);
    // cout << s << endl;
    for(int i=0;i<s.size();i++){
        dice.update_state(s[i]);
    }
    cout << dice.labels[0] << endl;
}
