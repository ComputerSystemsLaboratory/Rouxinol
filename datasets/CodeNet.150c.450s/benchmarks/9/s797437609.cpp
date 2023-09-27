#include <iostream>
using namespace std;

int main()
{
    string str;
    int m, n;

    while (true) {
        cin >> str;

        if (!str.compare("-")) {
            return 0;
        }

        cin >> m;

        for (int i = 0; i < m; i++) {
            cin >> n;
            str = str.substr(n, str.size()) + str.substr(0, n);
        }

        cout << str << endl;
    }
}