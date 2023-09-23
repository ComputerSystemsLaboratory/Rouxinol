#include<iostream>
using namespace std;
int main(){
    int W,H,x,y,r;
    cin >>W  >>H  >>x  >>y  >>r;
    if(x-r>=0 && x+r<=W){
        if(y-r>=0 && y+r<=H){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
   }else{
        cout<<"No"<<endl;
    
    }
    return 0;
}
