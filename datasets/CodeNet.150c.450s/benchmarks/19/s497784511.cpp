#include<iostream>
using namespace std;
int main(){
    int n = 1;
    int x, y;
    while(n == 1){
        cin >> x >> y;
        if (x == 0 && y == 0) break;
        if (x >= y) cout << y << " " << x << endl;
        if (y > x) cout << x << " " << y << endl;

    }
    return 0;
}
