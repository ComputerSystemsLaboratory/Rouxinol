/**
 *  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_C
 */
#include <iostream>
#include <string>
#include <set>

using namespace std;

int
main()
{
    int n;
    cin >> n; cin.ignore();

    set<string> dict;
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        if (line[0] == 'f') {
            auto found = dict.find(line.substr(5));
            cout << (found == dict.end() ? "no" : "yes") << endl;
        } else {
            dict.insert(line.substr(7));
        }
    }

    return 0;
}