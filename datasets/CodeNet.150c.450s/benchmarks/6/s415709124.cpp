#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int a, b, c = 0;
    
    cin >> a >> b >> c;
    
    if ((a < b) && (b < c) && (a < c)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}