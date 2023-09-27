#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define whole(xs) xs.begin(), xs.end()
typedef long long ll;
struct S {
    int d, p;
};
ostream& operator<<(ostream& os, const S& s) {
    os << "S: " << s.d << " " << s.p;
    return os;
}
bool comp(const S &a, const S &b) {
    return b.p < a.p;
}
int N, M; 
vector<S> v;

bool input() {
    cin >> N >> M;
    if (N == 0 && M == 0) return false;
    v.clear(); v.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i].d >> v[i].p;
    }
    return true;
}

int main() {
    while (input()) {
        ll ans = 0;
        sort(whole(v), comp);
        for (int i = 0; i < v.size(); i++) {
            if (M >= v[i].d) {
                M -= v[i].d;
            } else {
                ans += (v[i].d - M) * v[i].p;
                M = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}