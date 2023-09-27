#include <iostream>
using namespace std;
int main() {
    int n, c, s, I;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        c = 0;
        s = 0;
        I = i;
        if (i % 3 == 0 && c == 0) {
            cout << " " << i;
            c++;
        }
        if (i % 10 == 3 && c == 0) {
            cout << " " << i;
            c++;
        }
        if (c == 0){
            while (I / 10 != 0) {
                I /= 10;
                if (I == 3 || I % 10 == 3) {
                    cout << " " << i;
                    I = 0;
                }
            }
        }
    }
    cout << endl;
    return 0;
}


