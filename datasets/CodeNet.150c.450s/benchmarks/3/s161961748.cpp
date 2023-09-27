#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define FOR(i,a,b) for(int i=int(a);i<int(b);++i)
#define RFOR(i,a,b) for(int i=int(b)-1;i>=int(a);--i)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)

int q;

int main() {
    int a,b;
    string str,q_str,m_str;
    cin >> str;
    cin >> q;
    REP(i,q) {
        cin >> q_str;
        cin >> a >> b;
        if (q_str=="print") {
            cout << str.substr(a,b-a+1) << endl;
        } else if (q_str=="replace") {
            cin >> q_str;
            m_str = str.erase(a,b-a+1);
            str = m_str.insert(a,q_str);
        } else {
            reverse(str.begin()+a,str.begin()+b+1);
        }
        //cout << str << endl;
    }
    return 0;
}

