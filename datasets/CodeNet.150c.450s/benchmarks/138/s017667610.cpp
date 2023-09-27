#include <iostream>

using namespace std;

int main() {
    int x,y,min;

    cin >> x >> y;

    if(x > y){
        min = x % y;
        for(min;min > 0;min--){
            if((x % y) % min == 0 && y % min == 0){
                cout << min << endl;
                break;
            }
        }
    }
    else if(x == y){
        cout << x <<endl;
    }
    else {
        min = y % x;
        for(min;min > 0;min--){
            if((y % x) % min == 0 && x % min == 0){
                cout << min << endl;
                break;
            }
        }
    }

    return 0;
}