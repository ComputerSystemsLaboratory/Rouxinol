#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int x, y = 0;
    int temp = 0;
    
    while (cin >> x >> y, x != 0 || y != 0) {
        if (x > y) cout << y << " " << x << endl;
        else cout << x  << " " << y << endl;
    }
    
    return 0;
}