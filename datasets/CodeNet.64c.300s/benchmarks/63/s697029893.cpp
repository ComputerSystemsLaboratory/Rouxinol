#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int a,b,a2,b2;
    int lcm,gcd;
    while(cin >> a >> b){
        a2=a;
        b2=b;
        while(a != b){
        if(a>b){a = a-b;}
        else{b=b-a;}
        }
        lcm = a;
        gcd=a2 / lcm * b2;
        cout << lcm << " " << gcd << endl;
    }

}