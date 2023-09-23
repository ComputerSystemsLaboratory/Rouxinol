#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s; int a, b, c; cin >> a >> b >> c;
    if (a < b && b < c) s = "Yes";
    else s = "No";
    cout << s << endl;
}