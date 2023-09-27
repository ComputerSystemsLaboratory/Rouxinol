/**
 *  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_C
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

constexpr int
getindex(const char c)
{
    return c == 'T' ? 4 : c == 'G' ? 3 : c == 'C' ? 2 : 1;
}

int
gethash(const string &s, const int st)
{
    int hash = 0;
    for (int i = st; i < s.length(); i++) {
        hash = getindex(s.at(i)) + (hash * 5);
    }
    return hash;
}

int
main()
{
    int n;
    cin >> n; cin.ignore();

    vector<bool> dict(244140625);
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        if (line[0] == 'f') {
            cout << (dict[gethash(line, 5)] ? "yes" : "no") << endl;
        } else {
            dict[gethash(line, 7)] = true;
        }
    }

    return 0;
}