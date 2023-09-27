#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
    return a == 0 ? b : gcd(b%a, a);
}

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    cout << gcd(a, b) << '\n';
    return 0;
}