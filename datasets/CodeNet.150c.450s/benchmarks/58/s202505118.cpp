#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <typeinfo>
#include <algorithm>
#include <cctype>
using namespace std;

bool is_digits(const string &str) {
    return str.find_first_not_of("0123456789") == string::npos;
}

int main() {
    string tmp;
    int to, toto;
    vector<string> v;
    stack<int> sta;
    while (cin >> tmp) {
        v.push_back(tmp);
    }

    vector<string>::iterator p;
    for (p=v.begin(); p!=v.end(); p++) {
        if (is_digits(*p)) {
            sta.push(stoi(*p));
        } else {
            to = sta.top(); sta.pop();
            toto = sta.top(); sta.pop();
            if (*p == "+") {
                sta.push(toto + to);
            } else if (*p == "-") {
                sta.push(toto - to);
            } else if (*p == "*") {
                sta.push(toto * to);
            }
        }
    }

    cout << sta.top() << endl;
    return 0;
}