#include<iostream>
using namespace std;

typedef struct DICE{
    int s[6];
}dice;

dice dice_rotate(dice d, char rotate){
    int swap;
    if(rotate == 'E'){
        swap = d.s[2];
        d.s[2] = d.s[0];
        d.s[0] = d.s[3];
        d.s[3] = d.s[5];
        d.s[5] = swap;
    }else if(rotate == 'N'){
        swap = d.s[4];
        d.s[4] = d.s[0];
        d.s[0] = d.s[1];
        d.s[1] = d.s[5];
        d.s[5] = swap;
    }else if(rotate == 'S'){
        swap = d.s[1];
        d.s[1] = d.s[0];
        d.s[0] = d.s[4];
        d.s[4] = d.s[5];
        d.s[5] = swap;
    }else if(rotate == 'W'){
        swap = d.s[3];
        d.s[3] = d.s[0];
        d.s[0] = d.s[2];
        d.s[2] = d.s[5];
        d.s[5] = swap;
    }

    return d;
}

int main(){
    dice d;
    char rotate;
    int i,ensw;
    string rotate_list;

    for(i=0;i<6;i++){
        cin >> d.s[i];
    }

    cin >> rotate_list;

    for(i=0;i<rotate_list.size();i++){
        d = dice_rotate(d, rotate_list[i]);
    }

    cout << d.s[0] << endl;

    return 0;
}


