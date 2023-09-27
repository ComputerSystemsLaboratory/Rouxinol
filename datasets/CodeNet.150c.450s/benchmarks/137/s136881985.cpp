#include <iostream>
#include <string>
#include <set>

using namespace std;

bool solve(bool first) {
    int N;
    if(!(cin >> N)) return false;
    set<string> s;
    for(int i = 0; i < N; ++i) {
        string cmd, str;
        cin >> cmd >> str;
        if(cmd == "insert") {
            s.insert(str);
        } else {
            cout << (s.count(str) ? "yes" : "no") << endl;
        }
    }
    return true;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    cout.setf(ios::fixed);
    cout.precision(10);

    bool first = true;
    while(solve(first)) {
        first = false;
    }
    return 0;
}