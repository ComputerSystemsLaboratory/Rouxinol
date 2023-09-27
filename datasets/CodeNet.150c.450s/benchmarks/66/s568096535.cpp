#include <iostream>
#include <set>
#include <string>

using namespace std;

string message[] = {"Opened by ", "Closed by "};
int cnt;
int n, m;
set<string> registered;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        registered.insert(str);
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;
        if (registered.count(str) == 0) {
            cout << "Unknown " << str << endl;
        } else {
            cout << message[cnt % 2] << str << endl;
            cnt++;
        }
    }

    return 0;
}