#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#define pi 3.141592653589793283462
using namespace std;
int main(){
    int a;
    cin>>a;
    int m;
    string s;
    bool c[4][52]={false};
    for(int i=0;i<a;i++){
        cin>>s;   
        cin>>m;
        if(s=="S")
          c[0][m-1]=true;
        if(s=="H")
          c[1][m-1]=true;
        if(s=="C")
          c[2][m-1]=true;
        if(s=="D")
          c[3][m-1]=true;
    }
 
    for(int i=0;i<13;i++){
        if(c[0][i]==false)
            cout<<"S "<<i+1<<endl;
    }
    for(int i=0;i<13;i++){
        if(c[1][i]==false)
            cout<<"H "<<i+1<<endl;
    }
    for(int i=0;i<13;i++){
        if(c[2][i]==false)
            cout<<"C "<<i+1<<endl;
    }
    for(int i=0;i<13;i++){
        if(c[3][i]==false)
            cout<<"D "<<i+1<<endl;
    }
    return 0;
}