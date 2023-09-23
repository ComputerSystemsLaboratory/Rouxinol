#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int a[8];
    for (int i=0; i<8; ++i) cin >> a[i];
    cout << max(accumulate(a, a+4, 0), accumulate(a+4, a+8, 0)) << endl;
    return 0;
}