#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    int n;
    cin >> str;
    cin >> n;
    //iを使わないで減らすだけ
    while(n--) {
        string s;
        cin >> s;
        if (s == "print") {
            int a, b;
            cin >> a >> b;
            cout << str.substr(a, b-a+1) << endl;
        } else if (s == "reverse") {
            int a, b;
            cin >> a >> b;
            reverse(str.begin()+a, str.begin()+b+1);
        } else {
            int a, b;
            string p;
            cin >> a >> b >> p;
            str.replace(a, b-a+1, p);
        }
    }
    return 0;
}
