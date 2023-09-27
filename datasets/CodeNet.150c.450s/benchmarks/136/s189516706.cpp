#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    int c=a%b;
    while(c) {
        a=b;
        b=c;
        c=a%b;
    }
    return b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    while(cin>>a>>b) {
        int g=gcd(a, b);
        int l=a/g*b;
        cout<<g<<' '<<l<<'\n';
    }
    return 0;
}

