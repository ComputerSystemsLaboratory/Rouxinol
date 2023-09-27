#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;


int main(){
    int keys[251];
    
    int H;
    cin >> H;
    
    for (int i = 1; i <= H; i++){
        cin >> keys[i];
    }

    int p, l, r;
    for (int i = 1; i <= H; i++){
        p = i / 2;//parent
        l = 2 * i;//left
        r = 2 * i +1;//right
        cout << "node " << i << ": key = " << keys[i] << ", ";
        if(p != 0){
            cout << "parent key = " << keys[p] << ", ";
        }
        if(l <= H){
            cout << "left key = " << keys[l] << ", ";
        }
        if(r <= H){
            cout << "right key = " << keys[r] << ", ";
        }
        cout << endl;
    }
    return 0;
}
