#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct tamari{
        int pos;
        int amount;
};

int main()
{
    stack<int> bs;
    vector<tamari> t;
    char c;
    int pos = -1;
    int sum = 0;
    while (cin >> c) {
        pos++;
        if (c == '\\') bs.push(pos);
        if (c == '/') {
            if (bs.empty()) continue;
            int rain = pos - bs.top();
            sum += rain;
            while (!t.empty() && bs.top() < t.back().pos) {
                rain += t.back().amount;
                t.pop_back();
            }
            bs.pop();
            tamari tmp;
            tmp.pos = pos;
            tmp.amount = rain;
            t.push_back(tmp);
        }
    }
    cout << sum << endl;
    cout << t.size();
    for (int i = 0; i < t.size(); i++) {
        cout << " " << t[i].amount;
    }
    cout << endl;

    return 0;
}