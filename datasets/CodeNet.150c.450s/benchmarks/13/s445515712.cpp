#include <iostream>
using namespace std;

int main() {
    string s, p;
    cin >> s >> p;
    s += s;
    int count = 0;
    for (int i = 0; i < s.size() - p.size(); i++) {
        for (int j = 0; j < p.size(); j++) {
            if (s[i+j] == p[j]) {
                count++;
                if (count == p.size()) {
                    cout << "Yes" << endl;
                    return 0;
                }
            } else {
                count = 0;
                break;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}