#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int n, m;
    string u, t;
    set<string> u_set;
    bool is_opened = false;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> u;
        u_set.insert(u);
    }
    cin >> m;
    for (int i=0; i<m; i++) {
        cin >> t;
        if (u_set.find(t) != u_set.end()) {
            if (is_opened) {
                cout << "Closed by " << t << endl;
                is_opened = false;
            }
            else {
                cout << "Opened by " << t << endl;
                is_opened = true;
            }
        }
        else {
            cout << "Unknown " << t << endl;
        }
    }

    return 0;
}