#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string w, t;
    cin >> w;
    for (auto &x : w)
        if (isupper(x))
            x = tolower(x);
    int ans = 0;
    while (cin >> t, t != "END_OF_TEXT") {
        for (auto &x : t)
            if (isupper(x))
                x = tolower(x);
        if (w == t)
            ans++;
    }
    cout << ans << endl;
}
