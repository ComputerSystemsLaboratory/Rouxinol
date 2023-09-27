#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int mon,man;
    while(1){
        cin >> mon;
        if(mon == 0){
            break;
        }
        mon = 1000 - mon;
        man = 0;
        if(mon >= 500){
            man += mon / 500;
            mon = mon % 500;
        }
        if(mon >= 100){
            man += mon / 100;
            mon = mon % 100;
        }
        if(mon >= 50){
            man += mon / 50;
            mon = mon % 50;
        }
        if(mon >= 10){
            man += mon / 10;
            mon = mon % 10;
        }
        if(mon >= 5){
            man += mon / 5;
            mon = mon % 5;
        }
        man += mon;
        cout << man << endl;
    }
}