#include <iostream>
using namespace std;

int a, b;

int gcd(int x, int y){
    if(x % y == 0) return y;
    
    int res = gcd(y, x % y);
    return res;
}

int main(void){
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}

