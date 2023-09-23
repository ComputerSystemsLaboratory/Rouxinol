#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(void) {
        int a, b;
        cin >> a;       
        
        b = pow(a, 3);
        
        //cout << setprecision(N) << b  << endl;
        
        printf("%d\n", b);
        return 0;
}