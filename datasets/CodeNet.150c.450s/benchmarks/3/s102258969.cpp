#include<iostream>
using namespace std;
#include<string>

int main() {
        string str, com, tempstr, tempstr2;
        int i, j, q, x, y;
        cin >> str;
        cin >> q;
        for (i = 0; i < q; i++) {
                cin >> com >> x >> y;
                tempstr.clear();
                if (com == "replace") {
                        cin >> tempstr;
                        str.replace(x, y - x + 1, tempstr);
                } else if (com == "print") {
                        cout << str.substr(x, y - x + 1) << endl;
                } else {
                        for(j = y; j >= x; j--) tempstr += str[j];
                        str.replace(x, y - x + 1, tempstr);
                }
        }
}