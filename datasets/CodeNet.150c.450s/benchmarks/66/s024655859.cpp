#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_set<string> ids;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        ids.insert(s);
    }

    int m;
    cin >> m;
    bool open = false;
    for (int i = 0; i < m; ++i) {
        string t;
        cin >> t;
        if (ids.find(t) != end(ids)) {
            if (open) {
                cout << "Closed by " << t << endl;
            }
            else {
                cout << "Opened by " << t << endl;
            }
            open = !open;
        }
        else {
            cout << "Unknown " << t << endl;
        }
    }
}