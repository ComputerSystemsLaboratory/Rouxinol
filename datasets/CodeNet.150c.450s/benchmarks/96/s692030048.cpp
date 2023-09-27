#include <iostream>
#include <cstdio>
#include <string>
#include <map>
using namespace std;

map<char, string> convert_table;

void init() {
    convert_table['1'] = ".,!? ";
    convert_table['2'] = "abc";
    convert_table['3'] = "def";
    convert_table['4'] = "ghi";
    convert_table['5'] = "jkl";
    convert_table['6'] = "mno";
    convert_table['7'] = "pqrs";
    convert_table['8'] = "tuv";
    convert_table['9'] = "wxyz";
}

char convert(char c, int n) {
    n = (n-1) % convert_table[c].size();
    return convert_table[c][n];
}

int main() {
    init();
    int n;
    cin >> n; getchar();
    for (int i = 0; i < n; i++) {
        string s, t;
        getline(cin, s);
        char prev = s[0];
        int count = 1;
        for (int j = 1; j < s.size(); j++) {
            if (s[j] == prev) {
                count++;
            } else if (s[j] == '0') {
                if (prev == '0') {
                    continue;
                } else {
                    t.push_back(convert(prev, count));
                    prev = s[j];
                    count = 0;
                } 
            } else {
                prev = s[j];
                count = 1;
            }
        }
        cout << t << endl;
    }
    return 0;
}