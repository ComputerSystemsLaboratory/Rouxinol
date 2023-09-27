#include <iostream>
using namespace std;

int gcd(int, int);

int gcd(int p, int q){
    if(p % q) return gcd(q, p % q);
    else return q;
}

int main(void){
    int a, b;
    cin >> a >> b;
    
    if(b < a) cout << gcd(b, a);
    else cout << gcd(a, b);
    
    cout << endl;
    
    return 0;
}