#include <cstdio>
#include <iostream>

using namespace std;

int main(void) {
        int a, b;
        int R, S;
        
        cin >> a >> b;
        
        S = a * b;
        R = 2 * (a + b);
        
        cout << S << " " << R << endl;
        
        return 0;
}