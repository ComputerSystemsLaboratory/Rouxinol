#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;
    while (1) {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1) break;
        if (a == -1 || b == -1) cout << "F" << endl;
        else if (a + b >= 80) cout << "A" << endl;
        else if (a + b >= 65) cout << "B" << endl;
        else if (a + b >= 50) cout << "C" << endl;
        else if (a + b >= 30) {
            if (c >= 50) cout << "C" << endl;
            else cout << "D" << endl;
        }
        else cout << "F" << endl;
    }
    return 0;
}