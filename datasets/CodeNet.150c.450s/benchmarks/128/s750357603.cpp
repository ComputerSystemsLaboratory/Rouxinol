#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}