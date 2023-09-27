#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main() {
    string str, str1, str2;
    int m, h;
    while (true) {
        cin >> str;
        if (str == "-") break;
        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> h;
            str1 = str.substr(0, h);
            str2 = str.substr(h, str.size()-h);
            str = str2 + str1;
        }
        cout << str << endl;
    }
    return 0;
}
