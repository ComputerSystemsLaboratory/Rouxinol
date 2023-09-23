#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

int main(){
    long long int a,b;
    while(cin >> a >> b){
        cout << gcd(a,b) << " " << (a / gcd(a,b)) * b << endl;
    }
    return 0;
}