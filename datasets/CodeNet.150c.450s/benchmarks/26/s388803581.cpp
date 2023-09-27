#include <iostream>
#include <string>
using namespace std;

int main() {
    string s; int a, b; cin >> a >> b;
    if (a == b) s = "=="; else if (a < b) s = "<"; else s = ">";
    cout << "a " << s << " b" << endl;
}