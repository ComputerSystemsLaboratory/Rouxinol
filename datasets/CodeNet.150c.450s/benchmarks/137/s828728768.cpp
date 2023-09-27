#include<iostream>
#include<set>
using namespace std;
int main() {
    int n;
    cin >> n;
    set<string> st;
    for (int i = 0; i < n; ++i) {
        string command, str;
        cin >> command >> str;
        if (command[0] == 'i') {
            st.insert(str);
        } else {
            if (st.find(str) != st.end()) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}
