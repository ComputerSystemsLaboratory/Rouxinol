#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    int n;

    cin >> str;
    cin >> n;

    while (n-- > 0) {

        string q, p;
        int a, b, size;

        cin >> q;
        cin >> a >> b;
        size = b - a + 1;

        if (q == "print") {
            cout << str.substr(a, size) << endl;
        } else if (q == "reverse") {
            string sub = str.substr(a, size);
            for (int i = a, i_ = sub.length() - 1; i_ < sub.length(); ++i, --i_) {
                str[i] = sub[i_];
            }
        } else {
            cin >> p;
            str.replace(a, size, p);
        }
    }
}