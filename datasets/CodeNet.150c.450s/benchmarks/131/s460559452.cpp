#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

unsigned int l;

int next(int a) {
    stringstream ss;
    ss << a;
    string as;
    ss >> as;
    while (as.size() < l) {
        as = "0" + as;
    }
    int m[10] = {};
    for (string::iterator it = as.begin(); it != as.end(); it++) {
        m[*it - '0']++;
    }
    string max_as, min_as;
    for (int i = 0; i < 10; i++) {
        if (m[i] > 0) {
            max_as.insert(max_as.begin(), m[i], '0' + i);
            min_as.insert(min_as.end(), m[i], '0' + i);
        }
    }
    int max_a;
    ss.clear();
    ss << max_as;
    ss >> max_a;
    int min_a;
    ss.clear();
    ss << min_as;
    ss >> min_a;
    return max_a - min_a;
}

int main() {
    int a;
    while (cin >> a >> l, a|l) {
        map<int, int> m;
        m[a] = 0;
        int a0 = a;
        for (int i = 1; ; i++) {
            int a1 = next(a0);
            map<int, int>::iterator it = m.find(a1);
            if (it == m.end()) {
                m[a1] = i;
            } else {
                int j = it->second;
                cout << j << " " << a1 << " " << i - j << endl;
                break;
            }
            a0 = a1;
        }
    }
}