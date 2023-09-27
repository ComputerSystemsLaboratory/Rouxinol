#include <bits/stdc++.h>
using namespace std;

int GCD(long long int a, long long int b){
    if(a < b) swap(a,b);
    if(b == 0) return a;
    else return GCD(b,a%b);
}
int LCM(int gcd, long long int a, long long int b) {
    return a * b / gcd;
}

int main(){
    int gcd,lcm;
    long long int a,b;
    while(1){
        cin >> a >> b;
        if(cin.eof()) break;
        gcd = GCD(a,b);
        lcm = LCM(gcd,a,b);
        cout << gcd << " " << lcm << endl;
    }
    return 0;
}