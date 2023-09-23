#include <iostream>
using namespace std;

int main(void) {
    long a, n, min, max;
    long sum = 0;
    
    cin >> n;
    
    cin >> a;
    max = a;
    min = a;
    sum += a;
    for(int i = 1; i < n; ++i) {
        cin >> a;
        if(a < min) {
            min = a;
        }
        if(a > max) {
            max = a;
        }
        sum += a;
    }
    
    cout << min << ' ' << max << ' ' <<  sum << endl;
    
    return 0;
}

