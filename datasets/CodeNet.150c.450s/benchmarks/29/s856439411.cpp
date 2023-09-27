#include <algorithm>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int n, x;
    char com[20];
    list<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> com;
        if (com[0] == 'i') {
            cin >> x;
            v.push_front(x);
        } else if (com[6] == 'L') {
            v.pop_back();
        } else if (com[6] == 'F') {
            v.pop_front();
        } else if (com[0] == 'd') {
            cin >> x;
            for (list<int>::iterator it = v.begin(); it != v.end(); it++) {
                if (*it == x) {
                    v.erase(it);
                    break;
                }
            }
        }
    }

    int i = 0;
    for (list<int>::iterator it = v.begin(); it != v.end(); it++) {
        if (i++) cout << " ";
        cout << *it;
    }
    cout << endl;
}
