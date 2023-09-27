#include <iostream>
using namespace std;
 
int main() {
    int n, d = 100000;
	cin >> n;
    for (int i = 0; i < n; i++) {
        d = d * 1.05;
        if (d % 1000 > 0) {
            d = d - (d % 1000) + 1000;
        }
    }
    cout << d << '\n';
    return 0;
}
