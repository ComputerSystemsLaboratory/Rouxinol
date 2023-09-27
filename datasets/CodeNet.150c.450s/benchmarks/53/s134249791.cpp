#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int find(int n) {
    for (int i = 2; i < sqrt(n) + 1; i++) {
        if (n % i == 0) return i;
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    cout << n << ":";
    
    int d = find(n);
    while (d != -1) {
        while (n % d == 0) {
            cout << " " << d;
            n = n / d;
        }
        d = find(n);
    }
    
    if (n != 1) {
        cout << " " << n << endl;
    } else {
        cout << endl;
    }
    
    return 0;
}