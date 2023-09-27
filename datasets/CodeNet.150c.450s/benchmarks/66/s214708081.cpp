#include <iostream>
#include <ios>
#include <set>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false);

    set<string> registered;
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        string ID;
        cin >> ID;
        registered.insert(ID);
    }
    cin >> n;
    bool isLocked = true;
    for(int i = 0; i < n; ++i) {
        string ID;
        cin >> ID;
        if(registered.find(ID) != registered.end()) {
            if(isLocked) {
                cout << "Opened by " << ID << endl;
                isLocked = false;
            } else {
                cout << "Closed by " << ID << endl;
                isLocked = true;
            }
        } else {
            cout << "Unknown " << ID << endl;
        }
    }
    return 0;
}