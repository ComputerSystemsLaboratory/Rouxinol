#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int n, m;
    string u, t;
    bool is_opened = false;
    set<string> ids;

    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> u;
        ids.insert(u);
    }
    cin >> m;
    for (int i=0; i<m; i++) {
        cin >> t;
        if (ids.find(t) == ids.end()) {
            cout << "Unknown " << t << endl;
        }
        else {
            is_opened = !is_opened;
            if (is_opened) {
                cout << "Opened by " << t << endl;
            }
            else {
            cout << "Closed by " << t << endl;
            }
        }
    }
    return 0;
}