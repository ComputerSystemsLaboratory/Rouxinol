#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<string> si;
    bool open = false;

    int n;
    cin >> n;
    while (n--) {
        string u;
        cin >> u;
        si.insert(u);
    }

    int m;
    cin >> m;
    while (m--) {
        string t;
        cin >> t;
        if (si.find(t) == si.end()) {
            cout << "Unknown " << t << endl;
        } else {
            if (open)
                cout << "Closed by " << t << endl;
            else
                cout << "Opened by " << t << endl;
            open = !open;
        }
    }
    return 0;
}