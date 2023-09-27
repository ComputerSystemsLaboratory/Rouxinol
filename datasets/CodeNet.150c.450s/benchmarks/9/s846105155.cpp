#include <iostream>
#include <string>

using namespace std;

#define FOR(i,a,b) for(int i=int(a);i<int(b);++i)
#define RFOR(i,a,b) for(int i=int(b)-1;i>=int(a);--i)
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) RFOR(i,0,n)

int main()
{
    string str, m_str;
    int m, h, l;
    while (cin >> str) {
        if (str == "-") break;
        cin >> m;
        REP(i,m) {
            cin >> h;
            m_str = str.substr(0, h);
            str.erase(0, h);
            str += m_str;
        }
        cout << str << endl;
    }
    return 0;
}

