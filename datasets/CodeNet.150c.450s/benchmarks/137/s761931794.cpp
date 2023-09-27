#include <iostream>
#include <string>
using namespace std;

bool chk[244140624];
int n;
string ins, s;

int h(string s) {
    int ret = 0;
    for (int i=0; i<(int)s.size(); ++i) {
        ret *= 5;
        if (s[i] == 'A')
            ret += 1;
        else if (s[i] == 'C')
            ret += 2;
        else if (s[i] == 'G')
            ret += 3;
        else if (s[i] == 'T')
            ret += 4;
    }
    return ret;
}

int main() {
    cin >> n;
    while (n--) {
        cin >> ins >> s;
        if (ins[0] == 'i') {
            chk[h(s)] = true;
        } else {
            cout << (chk[h(s)] ? "yes" : "no") << endl;
        }
    }
    return 0;
}