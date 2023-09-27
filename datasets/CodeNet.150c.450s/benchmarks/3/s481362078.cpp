#include <iostream>
using namespace std;
int main() {
    string str,op,rstr;
    int q,a,b,i;
    cin >> str >> q;
    for (i=0;i<q;i++) {
        cin >> op >> a >> b;
        if (op == "print") {
            cout << str.substr(a, b-a+1) << endl;
        } else if (op == "reverse") {
            rstr = str.substr(a, b-a+1);
            for (int j=0;j<b-a+1;j++) {
                str[a+j] = rstr[b-a-j];
            }
        } else if (op == "replace") {
            cin >> rstr;
            str.replace(a, b-a+1, rstr);
        }
    }
    return 0;
}