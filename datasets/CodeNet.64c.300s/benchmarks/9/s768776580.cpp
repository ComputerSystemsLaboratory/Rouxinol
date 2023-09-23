#include <iostream>
#include <cmath>
using namespace std;

int main() {
double n; cin >> n;
double ret = 100000;
for(int i=0; i<n; i++) {
ret *= 1.05;
ret /= 1000;
ret = ceil(ret) * 1000;
}
cout << (int)ret << endl;
return 0;
}