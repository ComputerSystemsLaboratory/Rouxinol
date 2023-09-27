#include <bits/stdc++.h>
using namespace std;

#define rep(i,j) for (int i=0;i<(int)(j); ++i)

int main() {
    int n; cin >> n;
    while (n--) {
        string str; cin >> str;
        set<string> s; s.insert(str);
        rep(i,str.length()) {
            string str1 = str.substr(0, i+1);
            string str2 = str.substr(i+1, str.length());
            if (str1.length() && str2.length()) {
                rep(i, 2) {
                    rep(j, 2) {
                        s.insert(str1+str2);
                        reverse(str2.begin(), str2.end());
                    }
                    rep(j, 2) {
                        s.insert(str2+str1);
                        reverse(str2.begin(), str2.end());
                    }
                    reverse(str1.begin(), str1.end());
                }
            }
        }
        cout << s.size() << endl;
    }
}