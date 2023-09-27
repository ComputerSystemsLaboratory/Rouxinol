#include <iostream>

using namespace std;

void replace(string &str, int a, int b, string p) {

    for (int i = 0; i <= (b - a); i++) {
        str[i + a] = p[i];
    }
}

void reverse(string &str, int a, int b) {
    string newStr = str;

    for (int i = a, j = b; i <= b; i++, j--) {
        newStr[i] = str[j];
    }

    str = newStr;
}

void print(string str, int a, int b) {
    for (int i = a; i <= b; i++) {
        cout << str[i];
    }
    cout << "\n";
}


int main() {
    string str;
    cin >> str;

    int n;
    cin >> n;

    string order;
    int a, b;

    for (int i = 0; i < n; i++) {
        cin >> order;
        cin >> a >> b;
        
        if (order == "print") {
            print(str, a, b);
        } else if (order == "reverse") {
            reverse(str, a, b);
        } else if (order == "replace") {
            string p;
            cin >> p;
            replace(str, a, b, p);
        }
    }
}