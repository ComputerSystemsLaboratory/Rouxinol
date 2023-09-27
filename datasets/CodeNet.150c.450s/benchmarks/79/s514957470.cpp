#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> split(const string& str, char delimi) {
    vector<string> elem;
    string tmp;
    for (int i = 0; i < str.length(); ++i) {
        char c = str[i];
        if (c == delimi) {
            if (!tmp.empty()) {
                elem.push_back(tmp);
            }
            tmp.clear();
        } else {
            tmp += c;
        }
    }
    if (!tmp.empty()) {
        elem.push_back(tmp);
    }
    return elem;
}
int main() {
    while(1) {
        string str;
        getline(cin, str);
        vector<string> line = split(str, ' ');
        int n = atoi(line[0].c_str());
        if (n == 0)
            break;
        int r = atoi(line[1].c_str());
        int card[n];
        for (int i = 0, num = n; i < n; ++i, --num) {
            card[i] = num;
        }
        for (int i = 0; i < r; ++i) {
            string str;
            getline(cin, str);
            vector<string> line = split(str, ' ');
            int p = atoi(line[0].c_str());
            int c = atoi(line[1].c_str());
            rotate(card, card + p - 1, card + p + c - 1);
        }
        cout << card[0] << endl;
    }
}