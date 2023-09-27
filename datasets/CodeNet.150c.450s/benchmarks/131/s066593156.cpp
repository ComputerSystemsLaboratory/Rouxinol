#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <sstream>
#include <string>

using namespace std;

class Solver {
    typedef map<int, int> M;
    private:
        int next(int a) {
            vector<int> d;
            int max_a = 0;
            int min_a = 0;
            for (int i = 0; i < l; ++i) {
                d.push_back(a % 10);
                a /= 10;
            }
            sort(d.begin(), d.end());
            for (int i = 0; i < l; ++i) {
                max_a = 10 * max_a + d[l - i - 1];
                min_a = 10 * min_a + d[i];
            }
            return max_a - min_a;
        }
        string format(int j, int ai, int d) {
            stringstream ss;
            ss << j << " " << ai << " " << d;
            return ss.str();
        }
    public:
        int a0, l;
        string solve() {
            M m;
            int a = a0;
            while (true) {
                int i = m.size();
                if (m.find(a) != m.end()) {
                    return format(m[a], a, m.size() - m[a]);
                }
                m[a] = i;
                a = next(a);
            }
        }
};

int main() {
    Solver s;
    while (true) {
        cin >> s.a0 >> s.l;
        if (s.l == 0) {
            return 0;
        }
        cout << s.solve() << endl;
    }
}