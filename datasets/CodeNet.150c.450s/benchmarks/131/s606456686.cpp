#include <iostream>
#include <map>
#include <algorithm>
#include <functional>
#include <sstream>

using namespace std;

int l;

string exchange(const string s)
{
    int a, b;
    string a_s, b_s;
    stringstream s1, s2, ret;
    
    a_s = b_s = s;
    
    sort(a_s.begin(), a_s.end());
    sort(b_s.begin(), b_s.end(), greater<char>());
    s1 << a_s;
    s2 << b_s;

    s1 >> a;
    s2 >> b;
    a = b - a;
    ret << a;

    return ret.str();
}

int main()
{
    string s;

    while (cin >> s >> l, s != "0" || l) {
        map<string, int> m;

        while (s.size() < l)
            s = '0' + s;
        m[s] = 0;

        for (int i = 1; ; i++) {
            s = exchange(s);

            string tmp = s;
            while (tmp.size() < l)
                tmp = '0' + tmp;

            if (m.count(tmp) != 0) {
                cout << m[tmp] << " " << s << " " << i - m[tmp] << endl;
                break;
            }
            else
                m[tmp] = i;
            s = tmp;
        }
    }

    return 0;
}