#include <iostream>
#include <string>
#include <set>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    while (n--) {
        string st, rs;
        set<string> ss;

        cin >> st;
        rs = st;
        rs[0] = st[st.size() - 1];
        ss.insert(st);
        for (int i = 1; i < st.size(); i++) {
            string tmp1 = st.substr(0, st.size() - i);
            string tmp2 = st.substr(st.size() - i, i);
            rs[i] = st[st.size() - 1 - i];
            ss.insert((string)(tmp2 + tmp1));
        }

        for (int i = 1; i < st.size(); i++) {
            string tmp0 = st.substr(i, st.size() - i);
            string tmp1 = st.substr(0, i);
            string tmp2 = rs.substr(0, rs.size() - i);
            string tmp3 = rs.substr(rs.size() - i, i);
            ss.insert((string)(tmp0 + tmp3));
            ss.insert((string)(tmp1 + tmp2));
            ss.insert((string)(tmp3 + tmp0));
            ss.insert((string)(tmp2 + tmp1));
            ss.insert((string)(tmp3 + tmp2));
        }

        cout << (int)(ss.size()) << endl;
    }

    return 0;
}