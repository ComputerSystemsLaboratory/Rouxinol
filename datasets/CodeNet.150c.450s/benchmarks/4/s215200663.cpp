#include<iostream>
using namespace std;
int main(){
    int m,f,r;
    char c;
    while(1){
    cin>>m>>f>>r;
    if(m==-1&&f==-1&&r==-1)break;
    if(m==-1||f==-1) c='F';
    else if(m+f>=80) c='A';
    else if(m+f>=65) c='B';
    else if(m+f>=50||m+f>=30&&r>=50) c='C';
    else if(m+f>=30) c='D';
    else c='F';
    cout<<c<<endl;
    }
}