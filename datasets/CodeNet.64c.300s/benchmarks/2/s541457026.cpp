#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,f,r,s;
    char G;
    while(1){
        cin>>m>>f>>r;
        if(m==-1&&f==-1&&r==-1)break;
        s=m+f;
        if((m==-1)||(f==-1)){
            G='F';
        }else if(s>=80){
            G='A';
        }else if((s>=65)&&(s<80)){
            G='B';
        }else if((s>=50)&&(s<65)){
            G='C';
        }else if((s>=30)&&(s<50)){
            if(r>=50){
                G='C';
            }else{
                G='D';
            }
        }else if(s<30){
            G='F';
        }
        cout<<G<<endl;
    }
    return(0);
}