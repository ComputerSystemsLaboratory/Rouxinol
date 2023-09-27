#include <iostream>

using namespace std;

int main() {

    string s, new_s;

    while (true) {
        cin >> s;
        if (s == "-") {
            break;
        }

        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;

            for (int i = num; i < s.length(); i++) {
                new_s += s[i];
            }

            for (int i = 0; i < num; i++) {
                new_s += s[i];
            }
            s = new_s;
            new_s = "";
        }

        cout << s << endl;
    }


}