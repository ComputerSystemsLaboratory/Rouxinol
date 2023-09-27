#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        set<string> ss;
        for (int i = 0; i < n; i++) {
            string id;
            cin >> id;
            ss.insert(id);
        }
        int m;
        cin >> m;
        bool isOpen = false;
        for (int i = 0; i < m; i++) {
            string id;
            cin >> id;
            if (ss.find(id) == ss.end()) {
                cout << "Unknown " << id << endl;
            } else {
                if (isOpen) {
                    cout << "Closed by " << id << endl;
                } else {
                    cout << "Opened by " << id << endl;
                }
                isOpen = !isOpen;
            }
        }
    }
}