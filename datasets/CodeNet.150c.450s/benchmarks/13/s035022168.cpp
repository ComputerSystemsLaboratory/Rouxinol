#include <iostream>
#include <string>

using namespace std;

bool chkP (string s, string p); // contains matchSP
bool matchP (string s, string p);

int main () {
    // input
    string s, p;
    cin >> s >> p;

    // thinking
    chkP(s,p);

    // output
    if ( chkP(s, p) ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

bool chkP ( string s, string p ) {
    bool result = false;
    int len_s = s.length();
    int len_p = p.length();
    string s2 = s + s;
    for (int i=0; i<len_s; i++) {
        if ( matchP ( s2.substr(i, len_p), p ) ) {
            result = true;
            break;
        }
    }
    return result;
}


bool matchP (string s, string p) {// s: s partial
    if (s == p) {
        return true;
    } else {
        return false;
    }
}
