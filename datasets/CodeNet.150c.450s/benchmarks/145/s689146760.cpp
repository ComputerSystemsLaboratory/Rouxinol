#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, int> cnt;
string ans[2];
int num_max;
int main() {
    string str;
    while (cin >> str) {
        cnt[str]++;
    }

    for (auto e : cnt) {
        if (num_max < e.second) {
            ans[0] = e.first;
            num_max = e.second;
        }
        if (ans[1].size() < e.first.size()) {
            ans[1] = e.first;
        }
    }
    cout << ans[0] << " " << ans[1] << endl;
}