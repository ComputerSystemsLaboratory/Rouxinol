#include <stdio.h>
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map<string, int> cnt;
    string x;
    while (cin >> x) cnt[x]++;
    int m = 0;
    for (map<string, int>::iterator it = cnt.begin(); it != cnt.end(); ++it) {
        if (m < it->second) m = it->second;
    }
    string a, b;
    for (map<string, int>::iterator it = cnt.begin(); it != cnt.end(); ++it) {
        if (a.size() < it->first.size()) a = it->first;
        if (m == it->second) b = it->first;
    }
    cout << b << ' ' << a << endl;
    return 0;
}