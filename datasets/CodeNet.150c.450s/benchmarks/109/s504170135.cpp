#include <bits/stdc++.h>

#define REP(i, n) for (int i = 0; i < n; i++)
#define ALL(obj) obj.begin(), obj.end()
#define fcout cout << setprecision(10)

const int iINF = 1e9;
const long long llINF = 1e18;
const int MOD = 1e9 + 7;

using namespace std;

template <typename T>
void debug(vector<T> &vec) {
    for (auto x : vec) {
        cout << x << " ";
    }
    cout << endl;
    return;
}

template<typename A, size_t N, typename T>
void FILL(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}

template <typename T>
int getFormer(const vector<T> &vec, T x) {
    return upper_bound(vec.begin(), vec.end(), x) - vec.begin() - 1;
}

template <typename T>
int getLatter(const vector<T> &vec, T x) {
    return lower_bound(vec.begin(), vec.end(), x) - vec.begin();
}

void solve(int n) {
    vector<int> vec(1e5);
    REP(i, n) {
        int sh, sm, ss, th, tm, ts;
        scanf("%d:%d:%d %d:%d:%d", &sh, &sm, &ss, &th, &tm, &ts);
        int s = sh * 3600 + sm * 60 + ss, t = th * 3600 + tm * 60 + ts;
        vec[s] += 1;
        vec[t] -= 1;
    }

    REP(i, 1e5 - 1) {
        vec[i + 1] += vec[i];
    }

    int ans = 0;

    REP(i, 1e5) {
        ans = max(ans, vec[i]);
    }

    cout << ans << endl;

    return;
}

int main() {
    int n;
    while (cin >> n && n) {
        solve(n);
    }
    return 0;
}
