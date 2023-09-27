#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s, p;
    cin >> s >> p;
    s = s + s.substr(0, p.size());
    if (s.find(p) != string::npos)
        cout << "Yes\n";
    else
        cout << "No\n";
}