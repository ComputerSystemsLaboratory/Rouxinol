#include<iostream>
using namespace std;
int main(){
    int x,y;
    int i = 1;
    
    while (1){
        cin >>x >>y;
        if ((x == 0) && (y == 0)) break;
        
        if (x > y){
            cout<< y <<" "<< x <<endl;
        } else {
            cout<< x <<" "<< y <<endl;
        }
        
        i++;
    }
    return 0;
}
