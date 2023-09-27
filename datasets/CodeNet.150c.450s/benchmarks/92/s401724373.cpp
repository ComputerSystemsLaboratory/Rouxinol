#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string toString(int i) {
    stringstream ss;
    ss << i;
    return ss.str();
}

int main() {

    int a, b;
    while (cin >> a >> b) {
        int c = a + b;
        string s = toString(c);
        cout << s.length() << endl;
    }

    return 0;
}