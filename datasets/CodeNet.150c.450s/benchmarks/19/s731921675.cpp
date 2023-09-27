#include <iostream>
using namespace std;
int main(void){
    int x,y;    
    while(1){{
    cin >> x;
    cin >> y;
    if( x == 0 && y == 0) break;}
    if(x<y){
        cout << x;
        cout << " ";
        cout << y;
    }else{
         cout << y;
        cout << " ";
        cout << x;}
        cout << endl;}
    
}

