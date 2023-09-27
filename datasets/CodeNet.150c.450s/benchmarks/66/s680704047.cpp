#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m;
    string id;
    map<string, bool> account;
    bool door = false;

    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> id;
        account[id] = true;
    }

    cin >> m;
    for(int i = 0; i < m; ++i) {
        cin >> id;
        if(account.count(id)) {
            if(door == false) cout << "Opened by ";
            else cout << "Closed by ";
            door = !door;
        } else {
            cout << "Unknown ";
        }
        cout << id << endl;
    }

}