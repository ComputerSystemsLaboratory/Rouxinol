#include <iostream>
using namespace std;
int gcd(int a1, int b1) {
    if(a1 == 0 || b1 == 0) {
        return 0;
    }
    if(a1 >= b1) {
        if(a1 % b1 == 0) {
            return b1;
        } else {
            return gcd(b1, a1 % b1);
        }
    } else {
        if(b1 % a1 == 0) {
            return a1;
        } else {
            return gcd(a1, b1 % a1);
        }
    }
}

int main(void){
    // Here your code !
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}