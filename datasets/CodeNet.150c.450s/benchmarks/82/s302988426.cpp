#include<iostream>
#include<stdio.h>
#include<vector>
#include<ctype.h>
#include<string>
#include<cmath>
using namespace std;

class Dice{
    private:
    int face[7];
    
    public:
    
    void SetFace(){
        for(int i=1;i<sizeof(face)/sizeof(int);++i){
            cin>>face[i];
        }
    }
    void Up(){
        int buf=face[1];
        face[1]=face[2];
        face[2]=face[6];
        face[6]=face[5];
        face[5]=buf;
    }
    void Down(){
        int buf=face[1];
        face[1]=face[5];
        face[5]=face[6];
        face[6]=face[2];
        face[2]=buf;
    }
    void Right(){
        int buf=face[1];
        face[1]=face[4];
        face[4]=face[6];
        face[6]=face[3];
        face[3]=buf;
    }
    void Left(){
        int buf=face[1];
        face[1]=face[3];
        face[3]=face[6];
        face[6]=face[4];
        face[4]=buf;
    }
    void RightRolling(){
        int buf=face[2];
        face[2]=face[3];
        face[3]=face[5];
        face[5]=face[4];
        face[4]=buf;
    }
    void Rolling(char d){
        if(d=='N'){
            Up();
        }
        else if(d=='S'){
            Down();
        }
        else if(d=='E'){
            Right();
        }
        else if(d=='W'){
            Left();
        }
        else if(d=='R'){
            RightRolling();
        }
    }
    int GetFaceNum(int i){
        return face[i];
    }
};

Dice dice;
int q;
int main(){
    dice.SetFace();
    cin>>q;
    for(int i=0;i<q;++i){
        int face1Num,face2Num;
        cin>>face1Num>>face2Num;
        while(1){
            if(dice.GetFaceNum(1) == face1Num)break;
            for(int j=2;j<=6;++j){
                if(dice.GetFaceNum(j) == face1Num){
                    if(j==2 || j==5 || j==6){
                        dice.Up();
                    }
                    else{
                        dice.Right();
                    }
                }
            }
        }
        while(1){
            if(dice.GetFaceNum(2) == face2Num)break;
            for(int j=3;j<=5;++j){
                dice.RightRolling();
            }
        }
        cout<<dice.GetFaceNum(3)<<endl;
    }
    return 0;
}

