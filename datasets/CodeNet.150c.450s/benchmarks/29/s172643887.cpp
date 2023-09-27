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
            int k = 0;
            int len = cmd.length() - 7;
            switch (len) {
                case 10: k += (cmd[ len - 3 ] - '0') * 1000000000;
                case 9: k += (cmd[ len - 2] -  '0') * 100000000;
                case 8: k += (cmd[ len - 1] -  '0') * 10000000;
                case 7: k += (cmd[len] -       '0') * 1000000;
                case 6: k += (cmd[ len + 1] -  '0') * 100000;
                case 5: k += (cmd[ len + 2] -  '0') * 10000;
                case 4: k += (cmd[ len + 3] -  '0') * 1000;
                case 3: k += (cmd[ len + 4] -  '0') * 100;
                case 2: k += (cmd[ len + 5] -  '0') * 10;
                case 1: k += (cmd[ len + 6] -  '0');
            }
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