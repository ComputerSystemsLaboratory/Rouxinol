/**
 *  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_C
 */
#include <iostream>
#include <string>
#include <list>

using namespace std;

int
main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n; cin.ignore();

    list<int> lst;
    for (int i = 0; i < n; i++) {
        string cmd;
        getline(cin, cmd);

        switch (cmd[6]) {
          case 'F':
            lst.pop_front();
            break;
          case 'L':
            lst.pop_back();
            break;
          default:
            int k = stoi(cmd.substr(7));
            if(cmd[0] == 'i') {
                lst.push_front(k);
            } else {
                for (auto it = lst.cbegin(); it != lst.cend(); it++) {
                    if (*it == k) {
                        lst.erase(it);
                        break;
                    }
                }
            }
        }
    }
    for (auto it = lst.begin(); it != lst.end(); it++) {
        if (it != lst.begin()) { cout << ' '; }
        cout << *it;
    }
    cout << endl;

    return 0;
}