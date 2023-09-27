#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str, buf, operation, patch;
    istringstream strm;
    int q, a, b;

    getline(cin, str);
    getline(cin, buf);
    strm.str(buf);
    strm >> q;
    while (q--) {
        getline(cin, operation);
        strm.str(operation);
        strm.seekg(0);
        if (operation.compare(0, 7, "replace") == 0) {
            strm >> buf >> a >> b >> patch;
            str.replace(a, b - a + 1, patch);
        }
        else if (operation.compare(0, 7, "reverse") == 0) {
            strm >> buf >> a >> b;
            reverse(&str[a], &str[b+1]);
        }
        else if (operation.compare(0, 5, "print") == 0) {
            strm >> buf >> a >> b;
            cout << str.substr(a, b - a + 1) << endl;
        }
    }
    return 0;
}