#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
#include <sstream>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;

    rep(i,n) {
        string s;
        cin >> s;

        set<string> st;
        st.insert(s);

        REP(j,1,s.size()){ 
            stringstream ss;
            rep(k,j) {
                ss << s[k];
            }
            string res = ss.str();

            stringstream ss2;
            REP(k,j,s.size()) {
                ss2 << s[k];
            }

            string res2 = ss2.str();

            string t = res;
            reverse(res.begin(),res.end());
            string t2 = res2;
            reverse(res2.begin(),res2.end());

            st.insert(t+t2);
            st.insert(t2+t);

            st.insert(t+res2);
            st.insert(res2+t);

            st.insert(res+t2);
            st.insert(t2+res);

            st.insert(res+res2);
            st.insert(res2+res);
        }

        cout << st.size() << endl;
    }

    return 0;
}