#include <iostream>

using namespace std;

int main() {
    int x,y;
    
    do {
        cin >> x >> y;
        if(0 == x && 0 == y) {
            break;
        }
        
        if(x < y) {
            cout << x << " " << y << endl;
        }else {
            cout << y << " " << x << endl;
        }
    }while(!(0 == x && 0 == y));
    
    return 0;
}