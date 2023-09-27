#include <iostream>

int main(){
    using namespace std;

    int a = 0;
    int b = 0;
    cin >> a >> b;

    if( a < b ){
        cout << "a < b" << endl;
    }else if( a > b ){
        cout << "a > b" << endl;
    }else {
        cout << "a == b" << endl;
    }
}