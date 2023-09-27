#include<iostream>
using namespace std;

int main(){
    int i, x, y, z;
    for(i = 1; 1; i ++){
        cin >> x >> y;
        if(x == 0 & y == 0){
            break;
        }
        if(x > y){
            z = x;
            x = y;
            y = z;
            } 
        else{
        }     
        cout << x << " " << y << endl;
        }
    return 0;
}