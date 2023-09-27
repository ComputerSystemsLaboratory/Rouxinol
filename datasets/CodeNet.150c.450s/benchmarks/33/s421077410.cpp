#include <iostream>
using namespace std;

int main(void){
    while (1) {
        float x, y, s;
        cin >> x >> y >> s;
        
        if (x == 0 && y == 0 && s == 0) return 0;
        
        int mx = 0;
        for (float i = 1.0; i <= s; i += 1.0) {
            for (float j = 1.0; j <= s; j += 1.0) {
                if (int(i * (100.0 + x) / 100.0) + int(j * (100.0 + x) / 100.0) == s) {
                    mx = max(mx, int(i * (100.0 + y) / 100.0) + int(j * (100.0 + y) / 100.0));
                }
            }
        }
        
        cout << mx << endl;
    }
}

