#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(int a, int b){
    int r;
    while (b > 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int x, y;
    cin >> x >> y;
    if (x < y) swap(x,y);
    cout << gcd(x,y) << endl;
}


