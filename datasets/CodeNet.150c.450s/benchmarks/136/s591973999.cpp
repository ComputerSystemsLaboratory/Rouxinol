#include <iostream>
using namespace std;
typedef long long ll;
int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}
int main(){
    ios::sync_with_stdio(false);
    int a, b;
    while(cin >> a >> b)
        cout << gcd(a, b) << " " << ll(a)*ll(b)/gcd(a, b) << endl;
    return 0;
}