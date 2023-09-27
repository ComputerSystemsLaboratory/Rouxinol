#include<string>
#include<iostream>
using namespace std;
int main(){
    string a,b,h;
    int c,d=0,e=0,f,g;
    char U[1000][1000];
    cin>>b;
    for(int i=0;i<b.size();i++){
        U[0][i]=b[i];
    }
    cin>>c;
    for(int i=1;i<=c;i++){
        cin>>a;
        if(a=="print"){
            cin>>d>>e;
            for(int j=0;j<b.size();j++){
                U[i][j]=U[i-1][j];
            }
            for(int j=d;j<=e;j++){
                cout<<U[i][j];
            }
            cout<<endl;
        }
        else if(a=="replace"){
            cin>>d>>e>>h;
            for(int j=0;j<b.size();j++){
                U[i][j]=U[i-1][j];
            }
            for(int j=d;j<=e;j++){
                U[i][j]=h[j-d];
            }
        }
        else if(a=="reverse"){
            cin>>d>>e;
            for(int j=0;j<b.size();j++){
                U[i][j]=U[i-1][j];
            }
            for(int j=d;j<=e;j++){
                U[i][j]=U[i-1][d+e-j];
            }
        }
    }
    return 0;
}