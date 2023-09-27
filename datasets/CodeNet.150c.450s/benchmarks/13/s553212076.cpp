#include "iostream"
#include "string"

using namespace std;

int main() {
    string s, p;

    getline(cin, s);
    getline(cin, p);

    string::size_type pos = 0;
    bool res = false;
    if ((pos = s.find(p, pos)) != string::npos) {
        res = true;
    }
    else {
        string::size_type spos = 0;
        while ((pos = s.find(p[0], spos)) != string::npos) {
            int i = 0;
            spos = pos + 1;             // ?¬????????´¢???????????????   

            for (; i < p.length(); i++) {
                if (p[i] != s[pos++]) {
                    break;              //  ?????´???????????£???
                }
                if (pos == s.length()) {
                    pos = 0;
                }
            }

            if (i == p.length()) {
                res = true;         //  ?????´????????????
                break;
            }
        }
    }
        
    if (res) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}