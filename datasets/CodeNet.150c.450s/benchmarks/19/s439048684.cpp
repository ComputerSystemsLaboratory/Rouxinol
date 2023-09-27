#include<iostream>
using namespace std;
int main(){
    int x,y;
    
    while(1){
        cin >> x >> y;
        if((x==0)&&(y==0)) break;
        if(x <= y){
            cout << x << " " << y <<endl;
        }
        else{
            cout << y << " " << x <<endl; 
        }
    }
    
}
