#include <iostream>
using namespace std;
int main(void){
    
    int W;
    int H;
    int x;
    int y;
    int r;
    
    cin>>W>>H>>x>>y>>r;
    
     if(W<x+r||H<y+r){
        cout<<"No"<<endl;
    }
        else if(0>x-r||0>y-r){
        cout<<"No"<<endl;
    }
     else if(0<=x-r&&0<=y-r){
        cout<<"Yes"<<endl;
    }
     else if(W>=x+r&&H>=y+r){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
}

