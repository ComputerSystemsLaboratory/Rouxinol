#include <iostream>
#include <string>
using namespace std;

string shuffer(string src, int m) {
    string tmp = "";
    tmp.assign(src, m, (src.length() - m));
    tmp.append(src.erase(m, (src.length() - m)));

    return tmp;
}

int main() {
//    freopen("in.txt", "r", stdin);

    int n = 0, m;
    string str;

    while (1) {
        cin >> str;
        if (str == "-") {
            return 0;
        }

        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> m;
            str = shuffer(str, m);
        }
        cout << str << endl;
    }
}