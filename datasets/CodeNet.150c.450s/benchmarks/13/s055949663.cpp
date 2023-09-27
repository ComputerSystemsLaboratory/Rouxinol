#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, p;

    getline(cin, s);
    getline(cin, p);
    s += s;
    if (s.find(p) == string::npos) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }
    
    return 0;
}