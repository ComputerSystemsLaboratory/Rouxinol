#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    
    string symbol;
    if (a < b) {
        symbol = " < ";    
    } else if (a > b) {
        symbol = " > ";
    } else {
        symbol = " == ";
    }
    
    cout << 'a' << symbol << 'b' << endl;
}