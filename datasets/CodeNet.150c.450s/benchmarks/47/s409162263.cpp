#include <iostream>
using namespace std;
int main(void){
    int w,h,x,y,r;
    cin>>w>>h>>x>>y>>r;
    if(x-r<0||x+r>w){
        cout<<"No"<<endl;
    }
    else{
        if(y-r<0||y+r>h){
           cout<<"No"<<endl; 
        }
        else{
           cout<<"Yes"<<endl;
        }
    }
}