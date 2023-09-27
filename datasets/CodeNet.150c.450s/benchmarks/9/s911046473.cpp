#include<iostream>
using namespace std;
#include<string>

int main() {
        int m, h, i, j, k, x;
        string str, str1, str2;
        for (k = 0; k < 100; k++) {
                cin >> str;
                if (str == "-") break;
                cin >> m;
                h = 0;
                for (i = 0; i < m; i++) {
                        cin >> j;
                        h += j;
                }
                x = h % str.size();
                str1 = str.substr(0, x);
                str2 = str.substr(x, str.size());
                str = str2 + str1;
                cout << str << endl;
        }
        return 0;
}