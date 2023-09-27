#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

struct E {
    int t;
    char type;
    E(int t, char type) : t(t), type(type) {}
    bool operator<(const E& o) const {
        return (t == o.t ? type < o.type : t < o.t);
    }
};

int main() {
    int n;
    while (scanf("%d", &n), n != 0) {
        vector<E> es;
        for (int i = 0; i < n; i++) {
            int h, m, s;
            int _h, _m, _s;
            scanf("%d:%d:%d %d:%d:%d", &h, &m, &s, &_h, &_m, &_s);
            es.push_back(E(h*3600+m*60+s, 'o'));
            es.push_back(E(_h*3600+_m*60+_s, 'i'));
        }
        sort(es.begin(), es.end());
        int cnt = 0;
        int total = 0;
        for (int i = 0; i < es.size(); i++) {
            //cout << es[i].t << ':' << es[i].type << ' ';
            if (es[i].type == 'o') {
                cnt++;
                total = max(total, cnt);
            } else {
                cnt--;
            }
        }
        cout << total << endl;
    }
    return 0;
}