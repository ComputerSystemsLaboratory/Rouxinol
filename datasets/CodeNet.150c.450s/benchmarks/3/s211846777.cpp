#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

string str;
int q, a, b;

void print() {
    for (int i = a; i<=b; i++) {
        cout << str[i];
    }
    cout << endl;
}
void reverse() {
    while (a<b) {
        swap(str[a], str[b]);
        a++;
        b--;
    }
}
void replace(string p) {
    str.replace(a, b - a + 1, p);
}

int main() {
    string order;

    cin >> str;
    cin >> q;

    while (q--) {
        cin >> order >> a >> b;
        if (order == "print") print();
        else if (order == "reverse") reverse();
        else if (order == "replace") {
            string p;
            cin >> p;
            replace(p);
        }
    }

    return 0;
}