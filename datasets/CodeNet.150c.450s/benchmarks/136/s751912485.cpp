#include <algorithm>
#include <iostream>
using namespace std;

long int a,b;

int gcd(long int a,long int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    while(cin){
        cin >> a >> b;
        if(!cin) break;
        long int ans = gcd(a,b);
        cout << ans << " " << (a*b)/ans << endl;
    }
}