#include <iostream>
#include <string>
using namespace std;

int main() {
    int c;
    cin >> c;
    int *a = new int[c];
    for (int cc = 0; cc < c; cc++) {
        cin >> a[cc];
    }

    string str;
    for (int cc = c - 1; cc >= 0; cc--) {
        str += to_string(a[cc]) + " ";
    }
    str.erase(str.length() - 1);
    cout << str << endl;
}