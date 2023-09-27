#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

int main() {
    int n, p;
    vi s(50, 0);

    while (cin >> n >> p) {
        if (n == 0 && p == 0) break;
        fill(s.begin(), s.end(), 0);

        int i = 0, all = p;
        while (true) {
            if (p != 0) {
                p--;
                s[i]++;
                if (s[i] == all) break;
            } else {
                p += s[i];
                s[i] = 0;
            }

            i = (i+1) % n;
        }
        cout << i << endl;
    }

    return 0;
}