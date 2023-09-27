#include <bits/stdc++.h>
using namespace std;

struct _dice {
    int num[7];
    void roll(char x);
};

void _dice::roll(char o){
    int tmp[7];
    for (int i=1; i<7; i++) tmp[i] = num[i];
    if (o == 'E'){
        num[1] = tmp[4];
        num[3] = tmp[1];
        num[6] = tmp[3];
        num[4] = tmp[6];
    }
    if (o == 'W'){
        num[4] = tmp[1];
        num[1] = tmp[3];
        num[3] = tmp[6];
        num[6] = tmp[4];
    }
    if (o == 'N'){
        num[1] = tmp[2];
        num[2] = tmp[6];
        num[6] = tmp[5];
        num[5] = tmp[1];
    }
    if (o == 'S'){
        num[1] = tmp[5];
        num[5] = tmp[6];
        num[6] = tmp[2];
        num[2] = tmp[1];
    }
}

int main(){
    _dice dice;
    string ord;
    for (int i=1; i<7; i++) cin >> dice.num[i];
    cin >> ord;
    for (int i=0; i<ord.size(); i++) dice.roll(ord[i]);
    cout << dice.num[1] << endl;
    return 0;
}
