#include<iostream>
#include<string>
using namespace std;

int main(void) {
    string str, cmd, rep;
    int q, s, e;

    cin >> str >> q;
    for (int i = 0; i < q; i++) {
        cin >> cmd >> s >> e;
        int interval = e - s + 1;

        if (cmd == "print") {
            cout << str.substr(s, interval) << endl;
        } else if (cmd == "reverse") {
            string original = str.substr(s, interval);
            int size = original.size();
            for (int i = 0; i < size; i++) {
                str[s + i] = original[size - i - 1];
            }
        } else if (cmd == "replace") {
            cin >> rep;
            str.replace(s, interval , rep);
        }
    }

    return 0;
} 