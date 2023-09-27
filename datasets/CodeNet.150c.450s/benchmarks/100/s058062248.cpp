#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    long long a,tot = 1;
    cin >> a;
    while(a >= 1){
        tot *= a;
        a -= 1;
    }
    cout << tot << endl;
    return 0;
}