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

    void roll(){
        int tmp = labels[1];
        labels[1] = labels[3];
        labels[3] = labels[4];
        labels[4] = labels[2];
        labels[2] = tmp;     
    }
    
};


int main(){
    int labels[6];
    for(int i=0;i<6;i++){
        cin >> labels[i];
    }
    Dice dice(labels);

    int q; cin >> q;
    int nt, nf;
    for(int i=0;i<q;i++){
        cin >> nt >> nf;
        if(nt==dice.labels[3]){
            dice.update_state('E');
        }else if(nt==dice.labels[2]){
            dice.update_state('W');
        }
        while(nt != dice.labels[0]){
            dice.update_state('N');
        }
        while(nf != dice.labels[1]){
            dice.roll();
        }
        cout << dice.labels[2] << endl;
    }
    return 0;

}
