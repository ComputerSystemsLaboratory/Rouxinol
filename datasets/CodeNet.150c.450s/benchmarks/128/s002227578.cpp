#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (auto itr = s.rbegin(); itr != s.rend(); itr++) {
        cout << *itr;
    }
    cout << endl;
    return 0;
}