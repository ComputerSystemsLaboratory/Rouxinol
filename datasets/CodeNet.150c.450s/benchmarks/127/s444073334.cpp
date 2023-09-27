#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string str;
        cin >> str;
        vector<string> vec;
        int l = str.size();
        for (int i = 0; i < l; i++) {
            string head = str.substr(0, i);
            string head_ = head;
            string tail = str.substr(i);
            vec.push_back(head + tail);
            vec.push_back(tail + head);
            reverse(head.begin(), head.end());
            vec.push_back(head + tail);
            vec.push_back(tail + head);
            reverse(tail.begin(), tail.end());
            vec.push_back(head_ + tail);
            vec.push_back(head + tail);
            vec.push_back(tail + head_);
            vec.push_back(tail + head);
        }
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        cout << vec.size() << endl;
    }
    return 0;
}