#include <iostream>
#include <string>
using namespace std;

string reverse_partial(string str, int s, int e) {
    string top = s != 0 ? str.substr(0, s - 1) : "";
    string head = str.substr(s, e - s + 1);
    string tail = str.substr(e + 1, str.size());
    string reverse = "";
    for (int i=head.size()-1; i >= 0; i--) {
        reverse += head[i];
    }
    return (top + reverse + tail);
}

int main () {
    string str;
    cin >> str;
    int q;
    cin >> q;

    for (int i=0; i<q; i++) {
        string order, p;
        int a, b;
        cin >> order >> a >> b;
        if (order == "print") {
            cout << str.substr(a, b - a + 1) << "\n";
        }
        else if (order == "replace") {
            cin >> p;
            str = str.replace(a, b - a + 1, p);
        }
        else if (order == "reverse") {
            string sub = str.substr(a, b - a + 1);
            for (int i=0; i < sub.size(); i++) {
                str[i + a] = sub[sub.size() - i - 1];
            }
        }
    }
    return 0;
}