#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int n, m;
vector<string> ids;

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        ids.push_back(s);
    }

    cin >> m;
    bool locked = true;
    for (int i = 0; i < m; ++i) {
        string s;
        cin >> s;
        auto itr = find(ids.begin(), ids.end(), s);
        if (itr != ids.end()) {
            if (locked) cout << "Opened by " << s << endl;
            else cout << "Closed by " << s << endl;
            locked = !locked;
        } else {
            cout << "Unknown " << s << endl;
        }
    }
}