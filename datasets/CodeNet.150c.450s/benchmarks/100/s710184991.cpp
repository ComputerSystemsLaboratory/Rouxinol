#include <iostream>

#define ll long long 

using namespace std;

ll fact(ll n) {
    if(n == 1) {
        return 1;
    }
    
    return n * fact(n - 1);
}

int main() {
    int num;
    
    cin >> num;
    
    if(0 <= num && num <= 20) {
        cout << fact((ll)num) << endl;
    }
    
    return 0;
}
