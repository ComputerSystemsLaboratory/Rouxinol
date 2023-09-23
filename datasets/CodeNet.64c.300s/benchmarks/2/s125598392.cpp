#include <iostream>
using namespace std;
int main(void){
    int m,f,r;
    char rank;
    while(1){
        cin>>m>>f>>r;
        if(m==-1&&f==-1&&r==-1)break;
        if(m==-1||f==-1){
            rank='F';
        }else if(m+f>=80){
            rank='A';
        }else if(m+f>=65){
            rank='B';
        }else if(m+f>=50||(m+f>=30&&r>=50)){
            rank='C';
        }else if(m+f<30){
            rank='F';
        }else{
            rank='D';
        }
        cout<<rank<<endl;
    }
    return 0;
}