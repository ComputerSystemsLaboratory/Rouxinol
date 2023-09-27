#include <iostream>
#include <string>
#include <numeric>
using namespace std;

int main() {
    string s;
    while(cin >> s, s != "0") {
        cout << accumulate(s.begin(), s.end(), 0) - 48 * s.size() << endl;;
    }
}
