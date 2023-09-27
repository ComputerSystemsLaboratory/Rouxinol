#include <iostream>
using namespace std;

int tax(float x, float k) {
    return int(k * (100.0 + x) / 100.0);
}

int main(void){
    while (1) {
        float x, y, s;
        cin >> x >> y >> s;
        
        if (x == 0 && y == 0 && s == 0) return 0;
        
        int mx = 0;
        for (float i = 1.0; i <= s; i += 1.0) {
            for (float j = 1.0; j <= s; j += 1.0) {
                if (tax(x, i) + tax(x, j) == s) {
                    mx = max(mx, tax(y, i) + tax(y, j));
                }
            }
        }
        
        cout << mx << endl;
    }
}

