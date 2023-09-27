#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int maxlen = 0, maxcount = 0;
    string s, lens, counts;
    map<string, int> mp;
    while (cin >> s) {
        if (maxlen < s.size()) {
            maxlen = s.size();
            lens = s;
        }
        mp[s]++;
        if (maxcount < mp[s]) {
            maxcount = mp[s];
            counts = s;
        }
    }
    cout << counts << " " << lens << endl;
    
    return 0;
}