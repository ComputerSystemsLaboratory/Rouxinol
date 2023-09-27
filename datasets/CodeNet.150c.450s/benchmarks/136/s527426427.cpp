#include<iostream>
using namespace std;
int main() {
    long long a,b,t,GCD,LCM,g;
    while(cin >> a >> b) {
        g = a*b;
        while(b) {
            t = b;
            b = a % b;
            a = t;
        }
        GCD = a;
        LCM = g/a;
        cout << GCD << " " << LCM << endl;
    }
    return 0;
}