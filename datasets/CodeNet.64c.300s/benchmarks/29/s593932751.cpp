#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    while(true) {
        long long e; cin >> e;
        if(e == 0) return 0;
        long long x, y, z;
        long long rst_min = 2000000000;
        for(y = 0; y * y <= e; y++) {
            for(z = 0; z * z * z <= e; z++) {
                x = e - y * y - z * z * z;
                if(x < 0) continue;
                if(x + y * y + z * z * z == e) {
                    rst_min = min(rst_min, x + y + z);
                }
            }
        }
        cout << rst_min << endl;
    }
}

