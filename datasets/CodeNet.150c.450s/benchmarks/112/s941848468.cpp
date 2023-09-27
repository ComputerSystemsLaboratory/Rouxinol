#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    while (1) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }

        map<char, char> conversion;
        char c1, c2;
        for (int i=0; i<n; ++i) {
            cin >> c1 >> c2;
            conversion.insert(make_pair(c1, c2));
        }

        string result = "";
        cin >> n;
        char c;
        for (int i=0; i<n; ++i) {
            cin >> c;
            if (conversion.count(c)) {
                result += conversion[c];
            } else {
                result += c;
            }
        }

        cout << result << endl;
    }
    return 0;
}