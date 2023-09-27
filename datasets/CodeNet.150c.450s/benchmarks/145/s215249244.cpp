#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string, int> cnt;
string max_str;
int num_max;
int main() {
    string str;
    while (cin >> str) {
        cnt[str]++;
        num_max = max(num_max, cnt[str]);
        if (max_str.size() < str.size()) {
            max_str = str;
        }
    }

    for (auto e : cnt) {
        if (e.second == num_max) {
            cout << e.first << " ";
        }
    }
    cout << max_str << endl;
}