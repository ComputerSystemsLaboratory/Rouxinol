#include <iostream>

using namespace std;

int main() {

    while (1){
        int x, y, z;
        cin >> x >> y;
        
        if (x == 0 && y == 0){
            break;
        }else if (x > y){
            z = y;
            y = x;
            x = z;
            cout << x << " " << y << endl;
        }else{
            cout << x << " " << y << endl;
        }
        
    }
    
    
    return 0;
}