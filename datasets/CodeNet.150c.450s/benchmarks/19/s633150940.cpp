#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int x,y;
    while (true) {
        cin >> x >> y;
        if(x == 0 && y== 0){
            break;
        }
        
        if(x>y){
            int t = x;
            x = y;
            y = t;
        }
        
        cout << x << " " << y << endl;
    }
    
    return 0;
}