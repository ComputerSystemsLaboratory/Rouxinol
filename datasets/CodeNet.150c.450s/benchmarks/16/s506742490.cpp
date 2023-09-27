#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int
main(int argc, const char *argv[])
{
    char c;
    stack<int> S1;
    stack<pair<int, int>> S2;
    int s = 0;
    for (int i = 0; cin >> c; ++i) {
        if (c == '\\') S1.push(i); 
        else if (c == '/' && !S1.empty()) {
            int j = S1.top();
            S1.pop();
            s += i - j;
            int e = i - j;
            while (!S2.empty() && S2.top().first > j) {
                e += S2.top().second;    
                S2.pop();
            }
            S2.push(make_pair(j, e));
        }
    }
    vector<int> vi;
    while (!S2.empty()) {
        vi.push_back(S2.top().second);
        S2.pop();
    }
    cout << s << endl;
    cout << vi.size();
    for (auto iter = vi.crbegin(); iter != vi.crend(); ++iter) {
        cout << " " << *iter;
    }
    cout << endl;

    return 0;
}