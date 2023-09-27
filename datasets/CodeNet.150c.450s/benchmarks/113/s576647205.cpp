#include <iostream>
using namespace std;

bool show() {
    int x;
    static int counter = 1;
    cin >> x;
    if( x == 0 ) return false;
    cout << "Case" << " " << counter << ": " << x << endl;
    ++counter;
    return true;
}

int main() {

    while( show() ){ }
}