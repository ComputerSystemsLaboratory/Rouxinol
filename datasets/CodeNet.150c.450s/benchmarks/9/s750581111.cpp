#include <iostream>
#include <string>
using namespace std;

int main() {
    string s,left,right;
    int a, b;
    while (cin >> s, s != "-") {
        cin >> a;
        for (int i = 0; i < a; i++) {
            cin >> b;
            left = s.substr(0, b);
            right = s.substr(b);
            s = right + left;
        }
        cout << s << endl;
    }
    return 0;
}