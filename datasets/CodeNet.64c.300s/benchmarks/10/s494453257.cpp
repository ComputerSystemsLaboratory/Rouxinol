#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    int i = 0;
    
    while(i >= 0){
        cin >> x >> y;
        if((x == 0) && (y == 0))break;
        if(x <= y){
            cout << x << " " << y << endl;
        }else{
            cout << y << " " << x << endl;
        }
    
        i ++;
    }
}
