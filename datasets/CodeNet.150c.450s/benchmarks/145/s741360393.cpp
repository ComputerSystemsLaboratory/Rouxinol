#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void) {
    string a;
    map<string, int> data;

    while (cin >> a)
        ++data[a];

    int max_count = 0;
    string max_str = "";
    int max_len = 0;
    string max_len_str = "";

    for (auto itr = data.begin(); itr != data.end(); ++itr) {
        const pair<string, int>& hoge = *itr;
        if (hoge.second > max_count) {
            max_count = hoge.second;
            max_str = hoge.first;
        }
        if (hoge.first.length() > max_len) {
            max_len = hoge.first.length();
            max_len_str = hoge.first;
        }
    }

    cout << max_str << " " << max_len_str << endl;

    return 0;
}

