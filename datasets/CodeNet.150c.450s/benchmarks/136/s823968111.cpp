#include <iostream>
#include <cstdio>
using namespace std;

long int gcd(long int a,long int b){
    if(!(a%b)) return b;
    return gcd(b,a%b);
}
int main(){
    long int x,y;
    while(cin >> x >> y)
        cout << gcd(x,y) << " " << x*y/gcd(x,y) << endl;
    return 0;
}