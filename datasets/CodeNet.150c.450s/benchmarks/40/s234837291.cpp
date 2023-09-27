#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main(){
    int n,m;
    string S;
    int dice[6];
    for(int i=0;i<6;i++){
        cin>>dice[i];
    }
    cin>>S;
    for(int i=0;i<S.size();i++){
        if(S[i]=='N'){
            m=dice[0];
            dice[0]=dice[1];
            dice[1]=dice[5];
            dice[5]=dice[4];
            dice[4]=m;
        }
        else if(S[i]=='S'){
            m=dice[0];
            dice[0]=dice[4];
            dice[4]=dice[5];
            dice[5]=dice[1];
            dice[1]=m;
        }
        else if(S[i]=='W'){
            m=dice[0];
            dice[0]=dice[2];
            dice[2]=dice[5];
            dice[5]=dice[3];
            dice[3]=m;
        }
        else if(S[i]=='E'){
            m=dice[0];
            dice[0]=dice[3];
            dice[3]=dice[5];
            dice[5]=dice[2];
            dice[2]=m;
        }
        m=0;
    }
    cout<<dice[0]<<endl;
return 0;
}
