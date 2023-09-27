#include <iostream>
#include <algorithm>
#include <string>
#include <tr1/unordered_set>
using namespace std;

int main() {
    int N; cin >> N;
    tr1::unordered_set<string> s;
    while(N--) {
        string t; cin >> t; s.insert(t);
    }

    int M; cin >> M;
    bool isOpen = false;
    while(M--) {
        string t; cin >> t;
        if(s.count(t)) {
            isOpen ^= 1;
            cout << (isOpen ? "Opened by " : "Closed by ") << t << endl;
        }
        else {
            cout << "Unknown " << t << endl;
        }
    }
}