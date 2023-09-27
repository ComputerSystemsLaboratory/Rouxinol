#include <iostream>
using namespace std;

int main() {
    string s, t, u;
    cin >> s >> t;
    if (t.size() <= s.size() && (s+s).find(t) != string::npos)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
