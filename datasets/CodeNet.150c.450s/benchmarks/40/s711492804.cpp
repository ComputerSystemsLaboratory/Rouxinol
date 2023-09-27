#include <iostream>
#include <math.h>

using namespace std;
int main(void){

    int dice[6];
    cin >> dice[0] >> dice[1] >> dice[2] >> dice[3] >> dice[4] >> dice[5];
    
    string order;
    cin >> order;

    int dice_aft[6];
    for(int i=0;i<order.size();i++){
        if(order[i]=='N'){
            dice_aft[0]=dice[1];
            dice_aft[1]=dice[5];
            dice_aft[2]=dice[2];
            dice_aft[3]=dice[3];
            dice_aft[4]=dice[0];
            dice_aft[5]=dice[4];
        }else if(order[i]=='S'){
            dice_aft[0]=dice[4];
            dice_aft[1]=dice[0];
            dice_aft[2]=dice[2];
            dice_aft[3]=dice[3];
            dice_aft[4]=dice[5];
            dice_aft[5]=dice[1];
        }else if(order[i]=='W'){
            dice_aft[0]=dice[2];
            dice_aft[1]=dice[1];
            dice_aft[2]=dice[5];
            dice_aft[3]=dice[0];
            dice_aft[4]=dice[4];
            dice_aft[5]=dice[3];
        }else{
            dice_aft[0]=dice[3];
            dice_aft[1]=dice[1];
            dice_aft[2]=dice[0];
            dice_aft[3]=dice[5];
            dice_aft[4]=dice[4];
            dice_aft[5]=dice[2];
        }
        for(int j=0;j<6;j++) dice[j]=dice_aft[j];
    }
    cout << dice[0] <<endl;

}

