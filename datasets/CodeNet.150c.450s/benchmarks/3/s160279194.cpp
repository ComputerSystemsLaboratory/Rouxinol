#include <iostream>
#include <string>
using namespace std;

string replace(string str, int a, int b, string p);
string reverse(string str, int a, int b);
void print(string str, int a, int b);

int main() {
    string str, order, p;
    int a, b, q;
    cin >> str;
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> order;
        if (order == "replace") {
            cin >> a >> b >> p;
            str = replace(str, a, b, p);
        }
        else if (order == "reverse") {
            cin >> a >> b;
            str = reverse(str, a, b);
        }
        else if (order == "print") {
            cin >> a >> b;
            print(str, a, b);
        }
    }
    return 0;
}

string replace(string str, int a, int b, string p) {
    string ret = str;
    for (int i = 0; i < b-a+1; i++) {
        ret[a+i] = p[i];
    }
    return ret;
}


string reverse(string str, int a, int b) {
    string ret = str;
    for (int i = 0; i < b-a+1; i++) {
        ret[a+i] = str[b-i];
    }
    return ret;
}

void print(string str, int a, int b) {
    string ret = str.substr(a, b-a+1);
    cout << ret << endl;
}