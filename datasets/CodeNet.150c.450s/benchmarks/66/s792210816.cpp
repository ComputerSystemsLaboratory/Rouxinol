#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n, m;
    string u, t;
    map<string, bool> ic;
    bool open = true;

    cin >> n;
    while (n--) {
        cin >> u;
        ic[u] = true;
    }

    cin >> m;
    while (m--) {
        cin >> t;
        if (ic.count(t) == 0)
            cout << "Unknown " << t << endl;
        else {
            if (open) 
                cout << "Opened by " << t << endl;
            else
                cout << "Closed by " << t << endl;

            open = !open;
        }
    }

    return 0;
}