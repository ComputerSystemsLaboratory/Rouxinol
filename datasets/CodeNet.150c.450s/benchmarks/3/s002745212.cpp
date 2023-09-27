#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s, c, p;
    int q, a, b;

    cin >> s >> q;

    while (q-- && cin >> c) {
        cin >> a >> b;
        int size = b - a + 1;
        if (c == "print")
            cout << s.substr(a, size) << endl;
        else if (c == "reverse") {
            string st = s.substr(a, size);
            reverse(st.begin(), st.end());
            s = s.replace(a, size, st);
        } else {
            cin >> p;
            s = s.replace(a, size, p);
        }
    }

    return 0;
}
