#include <iostream>
#include <vector>
using namespace std;

int main() {
    int d; cin >> d;
    vector<int> c(26);
    for (int i=0; i<26; ++i) cin >> c[i];
    vector<vector<int> > s(d, vector<int>(26));
    for (int i=0; i<d; ++i) {
        for (int j=0; j<26; ++j) {
            cin >> s[i][j];
        }
    }
    vector<int> t(d);
    for (int i=0; i<d; ++i) cin >> t[i];
    long long now = 0;
    vector<int> last(26, -1);
    for (int i=0; i<d; ++i) {
        now += s[i][t[i] - 1];
        last[t[i] - 1] = i;
        for (int j=0; j<26; ++j) {
            now -= c[j] * (i - last[j]);
        }
        cout << now << endl;
    }
}