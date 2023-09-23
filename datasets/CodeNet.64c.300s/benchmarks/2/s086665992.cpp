#include <iostream>
#include <cmath>
//#include <string>
using namespace std;
int main(){
    while(true){
        int a,b,c;
        cin>>a>>b>>c;
        int ab=a+b;
        if(a==-1&&b==-1&&c==-1)break;
        if(a==-1||b==-1)cout<<'F'<<endl;
        else if(ab>=80){
            cout<<'A'<<endl;
        }else if(ab>=65){
            cout<<'B'<<endl;
        }else if(ab>=50||(ab>=30&&c>=50)){
            cout<<'C'<<endl;
        }else if(ab>=30){
            cout<<'D'<<endl;
        }else {
            cout<<'F'<<endl;
        }
        
        
    }
    
    
    
    return 0;
}

