#include<iostream>
#include<string>
#include<cstring>
using namespace std;
 
string S,R;
char T[5]="ACGT";
int U,a,q;
 
int power[12]={1,4,16,64,256,1024,4096,16384,65536,262144,1048576,4194304};
 
bool V;
 
bool x1[4];
bool x2[16];
bool x3[64];
bool x4[256];
bool x5[1024];
bool x6[4096];
bool x7[16384];
bool x8[65536];
bool x9[262144];
bool x10[1048576];
bool x11[4194304];
bool x12[16777216];
 
void insert(){
    U=0;
    for(int i=0;i<S.size();i++){
        for(int j=0;j<4;j++){
            if(T[j]==S[i]){
                U += power[i]*j;
            }
        }
    }
    a=S.size();
    if(a==1){
        x1[U]=true;
    }
    if(a==2){
        x2[U]=true;
    }
    if(a==3){
        x3[U]=true;
    }
    if(a==4){
        x4[U]=true;
    }
    if(a==5){
        x5[U]=true;
    }
    if(a==6){
        x6[U]=true;
    }
    if(a==7){
        x7[U]=true;
    }
    if(a==8){
        x8[U]=true;
    }
    if(a==9){
        x9[U]=true;
    }
    if(a==10){
        x10[U]=true;
    }
    if(a==11){
        x11[U]=true;
    }
    if(a==12){
        x12[U]=true;
    }
}
 
void find(){
    U=0;
    V=false;
    for(int i=0;i<S.size();i++){
        for(int j=0;j<4;j++){
            if(T[j]==S[i]){
                U += power[i]*j;
            }
        }
    }
    a=S.size();
    if(a==1 && x1[U]==true){
        V=true;
    }
    if(a==2 && x2[U]==true){
        V=true;
    }
    if(a==3 && x3[U]==true){
        V=true;
    }
    if(a==4 && x4[U]==true){
        V=true;
    }
    if(a==5 && x5[U]==true){
        V=true;
    }
    if(a==6 && x6[U]==true){
        V=true;
    }
    if(a==7 && x7[U]==true){
        V=true;
    }
    if(a==8 && x8[U]==true){
        V=true;
    }
    if(a==9 && x9[U]==true){
        V=true;
    }
    if(a==10 && x10[U]==true){
        V=true;
    }
    if(a==11 && x11[U]==true){
        V=true;
    }
    if(a==12 && x12[U]==true){
        V=true;
    }
    if(V==true){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
 
int main(){
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>R>>S;
        if(R=="insert"){
            insert();
        }
        if(R=="find"){
            find();
        }
    }
    return 0;
}