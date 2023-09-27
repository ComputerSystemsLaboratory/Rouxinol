#include <algorithm>
#include <cctype>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    string u;
    unordered_map<std::string, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> u;
        mp[u] = -1;
    }
    int m;
    cin >> m;
    string t[m];
    for (int i = 0; i < m; i++) {
        cin >> t[i];
    }
    int key = -1;
    for (int i = 0; i < m; i++) {
        if (mp[t[i]]) {
            if (key == -1) {
                cout << "Opened by " << t[i];
                key = 1;
            } else {
                cout << "Closed by " << t[i];
                key = -1;
            }
        } else {
            cout << "Unknown " << t[i];
        }
        cout << endl;
    }

    return 0;
}

