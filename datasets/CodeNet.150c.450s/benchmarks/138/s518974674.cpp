#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    long x,y,p;
    cin >> x >>y;
    if(x < y) swap(x,y);

    while(1){
        p = x % y;
        if (p == 0)break;

        swap (x,y);
        y = p;
    }
    cout << y << endl;
    return 0;
}