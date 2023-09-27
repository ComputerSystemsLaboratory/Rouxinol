#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    const int n = t;
    int trmp[4][13] = {};
    char s;
    int num;
    for(int i = 0; i < n; i++){
        cin >> s >> num;
        if(s == 'S'){
            trmp[0][num-1] = 1;
        }else if(s == 'H'){
            trmp[1][num-1] = 1;
        }else if(s == 'C'){
            trmp[2][num-1] = 1;
        }else if(s == 'D'){
            trmp[3][num-1] = 1;
        }
    }

    //cout << endl << "============" << endl;
    for(int i = 0; i < 13; i++){
        if(trmp[0][i] == 0){
            cout << "S " << i+1 << endl;
        }
    }
    for(int i = 0; i < 13; i++){
        if(trmp[1][i] == 0){
            cout << "H " << i+1 << endl;
        }
    }
    for(int i = 0; i < 13; i++){
        if(trmp[2][i] == 0){
            cout << "C " << i+1 << endl;
        }
    }
    for(int i = 0; i < 13; i++){
        if(trmp[3][i] == 0){
            cout << "D " << i+1 << endl;
        }
    }
}