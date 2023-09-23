#include<iostream>
using namespace std;

void gcd(int &x, int &y){
    int c;
    c = y;
    y = x % y;
    x = c;
}

int main(){

    int x, y;
    cin >> x >> y;
    if(x < y) y = y % x;

    while(1){
        gcd(x, y);
        if(y == 0) break;
    };
    cout << x << endl;

    return 0;
}