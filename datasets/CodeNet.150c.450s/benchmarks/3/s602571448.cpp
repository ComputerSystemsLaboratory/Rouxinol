#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str;
    int q;
    cin >> str >> q;

    for (int i = 0; i < q; i++) {
        string inst;
        unsigned int a,b;
        cin >> inst >> a >> b;

        if (inst == "print") {
            cout << str.substr(a,b-a+1) << endl;
        } else if (inst == "reverse") {
            string target = str.substr(a,b-a+1);
            reverse(target.begin(), target.end());
            str = str.substr(0,a) + target + str.substr(b+1);
        } else if (inst == "replace") {
            string rep;
            cin >> rep;
            str = str.substr(0,a) + rep + str.substr(b+1);
        }
    }
    return 0;
}