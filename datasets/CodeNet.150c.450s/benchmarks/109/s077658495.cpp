#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

typedef pair< int, int > iP;

int main() {

    int n;

    while(cin >> n, n) {
        vector< iP > v;
        vector< int > t(24 * 3600, 0);
        for(int i = 0; i < n; i++) {
            int h, m, s, hh, mm, ss;
            scanf("%2d:%2d:%2d %2d:%2d:%2d", &h, &m, &s, &hh, &mm, &ss);
            v.push_back(iP(h * 3600 + m * 60 + s, hh * 3600 + mm * 60 + ss));
            t[v[v.size() - 1].first]++, t[v[v.size() - 1].second]--;
        }

        for(int i = 1; i < 24 * 3600; i++) {
            t[i] += t[i - 1];
        }
        cout << *max_element(t.begin(), t.end()) << endl;
    }
}

