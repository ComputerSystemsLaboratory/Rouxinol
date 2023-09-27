#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v;
    v.push_back(".,!? ");
    v.push_back("abc");
    v.push_back("def");
    v.push_back("ghi");
    v.push_back("jkl");
    v.push_back("mno");
    v.push_back("pqrs");
    v.push_back("tuv");
    v.push_back("wxyz");

    int N;
    cin >> N;
    while (N--) {
        string s;
        cin >> s;
        int x = 0, cnt = 0;
        for (char c : s) {
            if (c == '0') {
                x--;
                cnt--;
                if (x != -1) {
                    cout << v[x][cnt % v[x].size()];
                }
                x = 0;
            } else {
                if (x == 0) {
                    x = c - '0';
                    cnt = 1;
                } else {
                    cnt++;
                }
            }
        }
        cout << endl;
    }
}