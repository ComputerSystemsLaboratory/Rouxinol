#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        string s;
        
        vector<string> v;
        
        v.push_back(".,!? ");
        v.push_back("abc");
        v.push_back("def");
        v.push_back("ghi");
        v.push_back("jkl");
        v.push_back("mno");
        v.push_back("pqrs");
        v.push_back("tuv");
        v.push_back("wxyz");
        
        while (cin >> s) {
            string p;
            char buf = 0;
            int c = 0;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '0') {
                    if (buf > 0)
                        p += v[buf - '0' - 1][(c - 1) % v[buf - '0' - 1].size()];
                    buf = 0;
                    c = 0;
                } else {
                    buf = s[i];
                    c++;
                }
            }
            
            cout << p << endl;
        }
    }

    return 0;
}

