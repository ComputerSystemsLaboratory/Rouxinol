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
            // cout << face[i] << endl;
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

    void rotateRight(){
        right = bottom;
        bottom = left;
        left = 7 - right;
    }

    void setCenter(int _center){
        // cout << "setCenter(int _center)" << endl;
        // cout << _center << endl;

        int diceIndex = 0;
        // for(int i = 1; i < sizeof(face); i++){
        for(int i = 1; i <= 6; i++){
            if(_center == face[i]){
                diceIndex = i;
                break;
            }
        }      

        // cout << diceIndex << endl;

        switch(diceIndex){
            case 1:
                // 何もしない
                break;
            case 2:
                move('N');
                break;
            case 3:
                move('W');
                break;
            case 4:
                move('E');
                break;
            case 5:
                move('S');
                break;
            case 6:
                move('S');
                move('S');
                break;
        }
    }
    void setBottom(int _bottom){
        // cout << "setBottom(int _bottom)" << endl;
        // cout << _bottom << endl;

        int diceIndex = 0;
        // cout << sizeof(face) << endl;
        for(int i = 1; i <= 6; i++){
			// cout << face[i] << endl;
            if(_bottom == face[i]){
                diceIndex = i;
                break;
            }
        }        
		// cout << diceIndex << endl;
        while(bottom != diceIndex){
            // cout << bottom << endl;
            rotateRight();
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
        // cout << face[center] << endl;
        cout << face[right] << endl;
    }
};

int main(){
    
    int face[7];
    int num;
    for(int i = 1; i <= 6; i++){
        cin >> num;
        // cout << num << endl;
        face[i] = num;
    }


    // char commands[100];
    // cin >> commands;
    // for(int i = 0; i < strlen(commands); i++){
    //     // cout << commands[i] << endl;
    //     dice.move(commands[i]);
    // }

    int rows;
    cin >> rows;
    for(int i = 0; i < rows; i++){
        Dice dice(face);

        int center;
        cin >> center;
        dice.setCenter(center);

        int bottom;
        cin >> bottom;
        dice.setBottom(bottom);

        dice.print();
    }


    return 0;
}
