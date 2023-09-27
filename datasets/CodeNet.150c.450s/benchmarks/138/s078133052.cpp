#include <iostream>
using namespace std;
int64_t gcd(int64_t a, int64_t b){
    if(b==0) return a;
    else return gcd(b, a%b);
}
int main(){
    int x,y; cin >> x >> y;
    cout << gcd(x, y) << endl;
    return 0;
}

