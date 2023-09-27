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
    dice d,proto;
    char rotate;
    int i,j,q,top,flont;

    for(i=0;i<6;i++){
        cin >> d.s[i];
    }

    proto = d;

    cin >> q;
    for(j=0;j<q;j++){
        d = proto;
        cin >> top;
        cin >> flont;
        i=0;
        while(d.s[0] != flont){
            if(i%2==0){
                d = dice_rotate(d, 'S');
            }else if(i%2==1){
                d = dice_rotate(d, 'E');
            }
            i++;
        }
        d = dice_rotate(d, 'S');
        while(d.s[0] != top){
            d = dice_rotate(d, 'E');
        }
    cout << d.s[2] << endl;

    }
    return 0;
}


