#include <iostream>
using namespace std;
int main(void){
    int x, y, s;
    while (cin >> x >> y >> s && s) {
        int res = 0;
        for (int i = 1; i < s; ++i) {
            for (int j = 1; j < s; ++j) {
                if (i + j > s) break;
                int ax = (i * (100 + x))/100;
                int bx = (j * (100 + x))/100;
                if (ax + bx == s) {
                    int ay = (i * (100 + y))/100;
                    int by = (j * (100 + y))/100;
                    if (res < ay + by) {
                        res = ay + by;
                    }
                }
            }
        }
        cout << res << endl;
    }
}