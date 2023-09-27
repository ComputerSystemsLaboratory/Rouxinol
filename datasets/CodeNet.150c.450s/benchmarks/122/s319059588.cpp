

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
string str;
priority_queue<int> q;

int main() {
    string str;
    while(cin >> str) {
        if(str == "insert" || str == "end")
            continue;
        else if(str == "extract") {
            int val = q.top();
            q.pop();
            cout << val << endl;
        } else {
            q.push(stoi(str));
        }
    }
}
