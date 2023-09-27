// ALDS1_4_C.cpp
// Search - Dictionary

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    string cmd;
    string str;
    set<string> dict;
    while (n--) {
        cin >> cmd >> str;
        if (cmd == "insert") {
            dict.insert(str);
        }
        else if (cmd == "find") {
            set<string>::iterator it = dict.find(str);
            if (it != dict.end()) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }
    return 0;
}