#include <iostream>

using namespace std;

int main() {
    string str, p;
    cin >> str >> p;
    str+=str;
    if (str.find(p) != string::npos) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

}