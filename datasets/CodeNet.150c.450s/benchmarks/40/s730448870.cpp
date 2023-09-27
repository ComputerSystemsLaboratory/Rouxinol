#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> dice(7);
    vector<int> tmp(7);
    for(int i=1; i<=6; i++){
        cin >> dice[i];
        //cout << dice[i] << endl;
    }
    string com;
    cin >> com;
   // cout << com << endl;
    for(int i=0; i<com.size(); i++){
        for(int j=1; j<=6; j++){
            tmp[j]=dice[j];
        }
        if(com[i]=='E'){
            dice[1]=tmp[4];
            dice[3]=tmp[1];
            dice[4]=tmp[6];
            dice[6]=tmp[3];
        }
        else if(com[i]=='N'){
            dice[1]=tmp[2];
            dice[2]=tmp[6];
            dice[5]=tmp[1];
            dice[6]=tmp[5];
        }
        else if(com[i]=='S'){
            dice[1]=tmp[5];
            dice[2]=tmp[1];
            dice[5]=tmp[6];
            dice[6]=tmp[2];
        }
        else if(com[i]=='W'){
            dice[1]=tmp[3];
            dice[3]=tmp[6];
            dice[4]=tmp[1];
            dice[6]=tmp[4];
        }
    }
    cout << dice[1] << endl;
    return 0;
}
