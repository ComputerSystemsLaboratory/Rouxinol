#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

string rev(string s) {
    string ret = "";
    for (int i=0; i<(int)s.size(); ++i) {
        ret = s[i] + ret;
    }
    return ret;
}

int main() {
    int m;
    cin >> m;
    while (m--) {
        string s; cin >> s;
        set<string> st;
        st.insert(s);
        for (int i=1; i<(int)s.size(); ++i) {
            st.insert(rev(s.substr(0,i)) + s.substr(i));
            st.insert(s.substr(0,i) + rev(s.substr(i)));
            st.insert(rev(s.substr(0,i)) + rev(s.substr(i)));
            st.insert(s.substr(i) + s.substr(0,i));
            st.insert(rev(s.substr(i)) + s.substr(0,i));
            st.insert(s.substr(i) + rev(s.substr(0,i)));
            st.insert(rev(s.substr(i)) + rev(s.substr(0,i)));
        }
        cout << st.size() << endl;
    }
    return 0;
}