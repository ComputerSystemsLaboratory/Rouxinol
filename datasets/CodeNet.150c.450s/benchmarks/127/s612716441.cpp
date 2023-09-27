#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        string s;
        cin >> s;
        unordered_set<string> ss;
        for (int j = 1; j < s.size(); ++j) {
            auto left = s.substr(0, j);
            auto leftR = left;
            reverse(begin(leftR), end(leftR));
            auto right = s.substr(j);
            auto rightR = right;
            reverse(begin(rightR), end(rightR));
            ss.insert(left + right);
            ss.insert(left + rightR);
            ss.insert(leftR + right);
            ss.insert(leftR + rightR);
            ss.insert(right + left);
            ss.insert(rightR + left);
            ss.insert(right + leftR);
            ss.insert(rightR + leftR);
        }
        cout << ss.size() << endl;
    }
}