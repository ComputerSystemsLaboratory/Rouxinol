#include <iostream>
using namespace std;
int main(void){
    while(1){
    int m, f, r;
    cin>>m>>f>>r;
    if(m==-1&&f==-1&&r==-1) break;
    if(m==-1||f==-1||m+f<30){
        cout<<"F"<<endl;
    }else if(m+f<50){
        if(r<50){
            cout<<"D"<<endl;
        }else{
            cout<<"C"<<endl;
        }
    }else if(m+f<65){
        cout<<"C"<<endl;
    }else if(m+f<80){
        cout<<"B"<<endl;
    }else{
        cout<<"A"<<endl;
    }
    
  }
  
}

