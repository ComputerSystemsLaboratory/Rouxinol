#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int q;
    cin >> str;
    cin >> q;
    for (int i = 0; i < q; i++) {
        string command;
        cin >> command;
        if (command == "print") {
            int a, b;
            cin >> a >> b;
            cout << str.substr(a, b-a+1) << endl;;
        } else if (command == "reverse") {
            int a, b;
            cin >> a >> b;
            for (int i = 0; i < (b-a+1)/2; i++) {
                char t = str[a+i];
                str[a+i] = str[b-i];
                str[b-i] = t;
            }
        } else  if (command == "replace") {
            int a, b;
            string p;
            cin >> a >> b >> p;
            str = str.replace(a, b-a+1, p);
        }
    }
    return 0;
}
