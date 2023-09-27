#include<iostream>
using namespace std;

int main(){
    int x,y,a,b;
    
    while(1){
        cin >>x >>y;
        if(x==0 && y==0) break;
        
        if(x<=y){
            a=x;
            b=y;
        } else {
            a=y;
            b=x;
        }
        cout << a << " " << b <<endl;
    }
    return 0;
}
