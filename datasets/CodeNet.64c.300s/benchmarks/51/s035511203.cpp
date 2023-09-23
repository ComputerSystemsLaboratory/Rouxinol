#include <iostream>

using namespace std;
typedef long long ll;

ll factorial(ll n){ return n ? n * factorial(n - 1) : 1; }

int main(void){
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}