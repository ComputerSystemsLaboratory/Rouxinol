#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        unordered_set<string> s;
        for (int i = 0; i < str.size(); i++) {
            string f = str.substr(0, i);
            string rf(f.rbegin(), f.rend());
            string l = str.substr(i);
            string rl(l.rbegin(), l.rend());
            s.insert(f + l);
            s.insert(l + f);
            s.insert(rf + l);
            s.insert(rl + f);
            s.insert(f + rl);
            s.insert(l + rf);
            s.insert(rf + rl);
            s.insert(rl + rf);
        }
        cout << s.size() << endl;
    }
    return 0;
}