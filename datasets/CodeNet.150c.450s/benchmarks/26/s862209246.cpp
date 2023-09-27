#include <iostream>
using namespace std;
int main(void){
    int a = 0, b = 0;
    cin >> a >> b;
    
    if( a > b ) {
        cout << "a > b" << endl;
    }else if( a == b ) {
        cout << "a == b" << endl;
    }else{
        cout << "a < b" << endl;
    }
}