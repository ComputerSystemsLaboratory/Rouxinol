#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    int t;
    while (cin >> t) {
        if (t > 0) s.push(t);
        else if (!s.empty()) {
            cout << s.top() << endl;
            s.pop();
        }
    }
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}