#include <bits/stdc++.h>

using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}
int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    
    int r1 = max(x, y);
    r1 = max(r1, z);
    
    int r3 = min(x, y);
    r3 = min(r3, z);
    
    int r2 = x + y + z - r1 - r3;
    
    cout << r3 << " " << r2 << " " << r1 << endl;
}
