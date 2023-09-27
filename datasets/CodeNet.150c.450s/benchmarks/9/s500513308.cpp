#include <iostream>
using namespace std;

int main() {
    for (;;) {
        string str;
        cin >> str;

        if (str == "-") break;

        int m;
        cin >> m;

        for (int i = 0; i < m; ++i) {
            int j;
            cin >> j;

            str = str.substr(j) + str.substr(0, j);
        }

        cout << str << endl;
    }

    return 0;
}