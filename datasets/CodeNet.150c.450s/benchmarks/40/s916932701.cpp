#include<iostream>
#include<string>
using namespace std;

int sai[100000][6];
int x[100000];
int main(){
    int y[6];
    string S;
    cin>>y[0]>>y[1]>>y[2]>>y[3]>>y[4]>>y[5];
    cin>>S;
    for(int i=0;i<S.size();i++){
        if(S[i]=='N'){
            x[i+1]=0;
        }
        if(S[i]=='E'){
            x[i+1]=1;
        }
        if(S[i]=='S'){
            x[i+1]=2;
        }
        if(S[i]=='W'){
            x[i+1]=3;
        }
    }
    for(int i=0;i<6;i++){
        sai[0][i]=y[i];
    }
    for(int i=1;i<=S.size();i++){
        if(x[i]==2){
            sai[i][0]=sai[i-1][4];
            sai[i][1]=sai[i-1][0];
            sai[i][2]=sai[i-1][2];
            sai[i][3]=sai[i-1][3];
            sai[i][4]=sai[i-1][5];
            sai[i][5]=sai[i-1][1];
        }
        if(x[i]==3){
            sai[i][0]=sai[i-1][2];
            sai[i][1]=sai[i-1][1];
            sai[i][2]=sai[i-1][5];
            sai[i][3]=sai[i-1][0];
            sai[i][4]=sai[i-1][4];
            sai[i][5]=sai[i-1][3];
        }
        if(x[i]==0){
            sai[i][0]=sai[i-1][1];
            sai[i][1]=sai[i-1][5];
            sai[i][2]=sai[i-1][2];
            sai[i][3]=sai[i-1][3];
            sai[i][4]=sai[i-1][0];
            sai[i][5]=sai[i-1][4];
        }
        if(x[i]==1){
            sai[i][0]=sai[i-1][3];
            sai[i][1]=sai[i-1][1];
            sai[i][2]=sai[i-1][0];
            sai[i][3]=sai[i-1][5];
            sai[i][4]=sai[i-1][4];
            sai[i][5]=sai[i-1][2];
        }
    }
    cout<<sai[S.size()][0]<<endl;
    return 0;
}