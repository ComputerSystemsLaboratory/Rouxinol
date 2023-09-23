#include<iostream>
using namespace std;
int main(){
    int m,f,r;
    while(cin>>m>>f>>r&&(m!=-1||f!=-1||r!=-1)){
        if(m==-1||f==-1){
            cout<<'F'<<"\n";
        }else{
            if(m+f>=80)cout<<'A'<<"\n";
            else if(m+f>=65)cout<<'B'<<"\n";
            else if((m+f>=50)||(m+f>=30&&r>=50))cout<<'C'<<"\n";                                                              
            else if(m+f>=30)cout<<'D'<<"\n";
            else cout<<'F'<<"\n";
        }
    }
}
