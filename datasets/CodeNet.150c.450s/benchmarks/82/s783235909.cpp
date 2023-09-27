#include<bits/stdc++.h>
using namespace std;

vector<int> dice(7);
vector<int> tmp(7);
void change_dice(char c){
    for(int i=1; i<=6; i++){
        tmp[i]=dice[i];
    }
    if(c=='E'){
        dice[1]=tmp[4];
        dice[3]=tmp[1];
        dice[4]=tmp[6];
        dice[6]=tmp[3];
    }
    else if(c=='N'){
        dice[1]=tmp[2];
        dice[2]=tmp[6];
        dice[5]=tmp[1];
        dice[6]=tmp[5];
    }
    else if(c=='S'){
        dice[1]=tmp[5];
        dice[2]=tmp[1];
        dice[5]=tmp[6];
        dice[6]=tmp[2];
    }
    else if(c=='W'){
        dice[1]=tmp[3];
        dice[3]=tmp[6];
        dice[4]=tmp[1];
        dice[6]=tmp[4];
    }
}

int main(){
    for(int i=1; i<=6; i++)
        cin >> dice[i];    
    int n;
    cin >> n;
    while(n--){
        int upper,front;
        cin >> upper >> front;
        
        //初期位置の探索
        int key;
        for(int i=1; i<=6; i++){
            if(dice[i]==front)
                key=i;
        }
        //frontを揃える
        switch(key){
            case 1: 
                change_dice('S');
                break;
            case 2:
                break;
            case 3:
                change_dice('W');
                change_dice('S');
                break;
            case 4:
                change_dice('E');
                change_dice('S');
                break;
            case 5:
                change_dice('S');
                change_dice('S');
                break;
            case 6:
                change_dice('N');
                break;
        }
        //upperを揃える
        while(dice[1]!=upper){
            change_dice('E');
        }
        cout << dice[3] << endl;
   }
   return 0;
}
