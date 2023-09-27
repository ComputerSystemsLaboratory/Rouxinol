#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

string rev(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    int m;
    cin >> m;
    while (m--) {
        string s; cin >> s;
        set<string> st;
        st.insert(s);
        st.insert(rev(s));
        for (int i=1; i<(int)s.size(); ++i) {
            string s1, s2, s3, s4;
            s1 = s.substr(0,i);
            s2 = s.substr(i);
            s3 = rev(s1);
            s4 = rev(s2);
            st.insert(s3 + s2);
            st.insert(s1 + s4);
            st.insert(s3 + s4);
            st.insert(s2 + s1);
            st.insert(s4 + s1);
            st.insert(s2 + s3);
        }
        cout << st.size() << endl;
    }
    return 0;
}