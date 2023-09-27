#include <iostream>
using namespace std;

int main(){
    long x, y;
    cin >> x >> y;
    while (x != 0 && y != 0){
        if (x >= y){
            long tmp = 0;
            tmp = y;
            y = x % y;
            x = tmp;
        }
        else {
            long tmp = 0;
            tmp = x;
            x = y;
            y = tmp;
        }
    }
    if (x == 0) cout << y << endl;
    else cout << x << endl;
    return 0;
}