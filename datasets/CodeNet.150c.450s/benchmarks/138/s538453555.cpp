#include <iostream>
using namespace std;
void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
}

int gcd(int a, int b){
    if (a < b){
        swap(a, b);
    }
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main(void){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}