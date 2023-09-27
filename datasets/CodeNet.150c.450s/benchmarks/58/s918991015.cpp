#include <iostream>
#include <string>
#include <stack>
#include <sstream>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    stack<int> sta;
    stringstream ss(str);
    string item;
    while (getline(ss, item, ' ')) {
        if ('0' <= item[0] && item[0] <= '9') {
            sta.push(stoi(item));
            continue;
        }

        int r = sta.top();
        sta.pop();
        int l = sta.top();
        sta.pop();

        switch (item[0]) {
        case '+':
            sta.push(l + r);
            break;
        case '-':
            sta.push(l - r);
            break;
        case '*':
            sta.push(l * r);
            break;
        default:
            break;
        }
    }
    
    cout << sta.top() << endl;

    return 0;
}