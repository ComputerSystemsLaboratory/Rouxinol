#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long gcd(int m, int n) {
    if((0 == m) || (0 == n)) return 0;
    while(m != n) {
        if(m > n) m = m - n;
        else n = n - m;
    }
    return m;
}

long long lcm(int m, int n) {
    if((0 == m) || (0 == n)) return 0;
    return((m / gcd(m, n)) * n);
}

int main() {
    vector<int> v1;
    vector<int> v2;
    while(cin) {
        int a, b;
        cin >> a >> b;
        v1.push_back(a);
        v2.push_back(b);
    }
    for(int i=0; i<v1.size() - 1;i++) {
        cout << gcd(v1[i], v2[i]) << " " << lcm(v1[i], v2[i]) << endl;
    }
    return 0;
}