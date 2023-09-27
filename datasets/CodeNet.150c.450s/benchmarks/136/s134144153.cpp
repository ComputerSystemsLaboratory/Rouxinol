#include <iostream>
#include <algorithm>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
    long long a,b,gcd,lcm;
    long long c,d;
    while(true) {
        cin >> a >> b;
        if(!cin)
            return 0;
        c = a; d = b;
        while(true){
            if(a>b)
                swap(a,b);
            b = b%a;
            if(b == 0)
                break;

        }
        gcd = a;
        lcm = c/gcd*d; 
        cout << gcd << ' ' << lcm << '\n';
    }
}