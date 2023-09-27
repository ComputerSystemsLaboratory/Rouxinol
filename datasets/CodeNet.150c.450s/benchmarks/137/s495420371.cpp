#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    string query, str;
    set<string> str_set;

    for (int i = 0; i < n; i++) {
        cin >> query >> str;

        if (query == "insert") {
            str_set.insert(str);
        } else if (query == "find") {
            cout << (str_set.find(str) != str_set.end() ? "yes" : "no") << endl;
        }
    }

    return 0;
}

