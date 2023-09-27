#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;

class Dice{
public:
    int face[7];
    int nowFace;

    int center;
    int top;
    int bottom;
    int left;
    int right;

    Dice(int num[]){
        for(int i = 1; i <= 6; i++){
            face[i] = num[i];
        }
        // nowFace = face[0];

        center = 1;
        top = 5;
        bottom = 2;
        left = 4;
        right = 3;
    }

    void move(char command){
        switch(command){
            case 'E':
                top = top; // 変化せず
                bottom = bottom; // 変化せず
                right = center;
                center = left;
                left = 7 - right;
                // printDebug();
                break;
            case 'N':
                left = left; // 変化せず
                right = right; // 変化せず
                top = center;
                center = bottom;
                bottom = 7 - top;
                // printDebug();
                break;
            case 'S':
                left = left; // 変化せず
                right = right; // 変化せず
                bottom = center;
                center = top;
                top = 7 - bottom;
                // printDebug();
                break;
            case 'W':
                top = top; // 変化せず
                bottom = bottom; // 変化せず
                left = center;
                center = right;
                right = 7 - left;
                // printDebug();
                break;
        }
    }

    void printDebug(){
        cout << "center: " << center << endl;
        cout << "top: " <<  top << endl;        
        cout << "bottom: " <<  bottom << endl;        
        cout << "left: " <<  left << endl;        
        cout << "right: " <<  right << endl;        
    }

    void print(){
        cout << face[center] << endl;
    }
};

int main(){
    
    int face[6];
    int num;
    for(int i = 1; i <= 6; i++){
        cin >> num;
        // cout << num << endl;
        face[i] = num;
    }

    Dice dice(face);

    char commands[100];
    cin >> commands;
    for(int i = 0; i < strlen(commands); i++){
        // cout << commands[i] << endl;
        dice.move(commands[i]);
    }

    dice.print();

    return 0;
}
