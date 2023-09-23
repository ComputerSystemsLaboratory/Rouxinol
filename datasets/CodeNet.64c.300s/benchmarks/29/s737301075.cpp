#include<iostream>
using namespace std;

int main(){
    long e;
    int x,y,z;
    cin>>e;
    long min=e;
    while(e!=0){
        min=e;
        for(z=0;z*z*z<=e;++z){
            for(y=0;y*y+z*z*z<=e;++y){
                x=e-y*y-z*z*z;
                if(x>=0){
                    if(min>x+y+z) min=x+y+z;
                }
            }
        }
        cout<<min<<"\n";
        cin>>e;
    }
}