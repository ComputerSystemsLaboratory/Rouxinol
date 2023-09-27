#include <iostream>
using namespace std;

int main(){
    
    
    while(true){
        
        
        int m,f,r;
        cin>>m>>f>>r;
        
        if(m==-1&&f==-1&&r==-1)break;
        
        int ans=m+f;
        if(m==-1||f==-1){
            cout<<'F'<<endl;
        }
        else if(ans>=80){
            cout<<'A'<<endl;
        }else if(ans>=65){
            cout<<'B'<<endl;
        }else if(ans>=50){
            cout<<'C'<<endl;
        }else if(ans>=30){
            if(r>=50)cout<<'C'<<endl;
            else cout<<'D'<<endl;
        }else{
            cout<<'F'<<endl;
        }
        
        
    }
}
