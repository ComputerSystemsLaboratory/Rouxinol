#include<iostream>
using namespace std;

int main() {
    string str, c;
    int q;
    cin >> str >> q;

    for (int i = 0; i < q; i++) {
        cin >> c;
        if (c == "print") {
            int a, b;
            cin >> a >> b;
            cout << str.substr(a, b - a + 1) << endl;
        } else if (c == "reverse") {
            int a, b;
            cin >> a >> b;
            string sub = str.substr(a, b - a + 1);

            for (int i = 0; i < b - a + 1; i++) {
                str[b - i] = sub[i];
            }
        } else {
            int a, b;
            string p;
            cin >> a >> b >> p;
            str.replace(a, b - a + 1, p);
        }
    }
}