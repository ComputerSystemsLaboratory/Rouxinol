#include <iostream>
#include <string>
#include <map>
using namespace std;

int n;
string ins, s;

int main() {
    cin >> n;
    map<string, bool> dict;
    while (n--) {
        cin >> ins >> s;
        if (ins[0] == 'i') { //insert
            dict[s] = true;
        } else {
            cout << (dict.count(s) ? "yes" : "no") << endl;
        }
    }
    return 0;
}