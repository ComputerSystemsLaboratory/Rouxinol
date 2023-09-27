#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, p;
    cin >> s >> p;
    for (int i = 0; i < s.size(); i++) {
        rotate(s.begin(), s.begin() + 1, s.end());
        if (s.find(p) != -1) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
