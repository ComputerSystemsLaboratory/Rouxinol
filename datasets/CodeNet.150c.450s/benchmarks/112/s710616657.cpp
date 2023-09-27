#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;

    while (cin >> n, n) {
        map<char, char> conv;
        int m;
        char t, f;

        for (int i = 0; i < n; i++) {
            cin >> f >> t;
            conv[f] = t;
        }
        
        cin >> m;
        for (int i = 0; i < m; i++) {
            char ch;

            cin>> ch;
            if (conv.count(ch) != 0)
                cout << conv[ch];
            else
                cout << ch;
        }
        cout << endl;
    }

    return 0;
}