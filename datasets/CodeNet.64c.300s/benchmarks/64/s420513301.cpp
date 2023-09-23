#include <iostream>
using namespace std;
int gcd(int bigger, int smaller){
    int mod = bigger % smaller;
    if(mod == 0){
        return smaller;
    }
    return gcd(smaller, mod);
}
int main(){
    ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int x, y, d;
    cin >> x >> y;
    if(x > y){
        d = gcd(x, y);
    }else{
        d = gcd(y, x);
    }
    cout << d << endl;
    return 0;
}