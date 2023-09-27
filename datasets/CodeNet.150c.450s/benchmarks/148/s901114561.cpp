#include <bits/stdc++.h>
#define int long long
#define x first
#define y second
#define getbit(x, i) (((x) >> (i)) & 1)
using namespace std;
typedef pair<int, int> pii;
#define hashset unordered_set
#define hashmap unordered_map
#define newline fast_writechar('\n')
#define unify(arr) arr.resize(unique(arr.begin(), arr.end()) - arr.begin())
#define getbit(x, i) (((x) >> (i)) & 1)

template <typename T>
vector<T> readvector(size_t sz) {
    vector<T> res(sz);
    for (size_t i = 0; i < sz; ++i) {
        cin >> res[i];
    }
    return res;
}
template <typename T>
std::ostream &operator<<(std::ostream &out, const std::vector<T> &v) {
    std::copy(v.begin(), v.end(), std::ostream_iterator<T>(out, " "));
    return out;
}

int mylog(int n) {
    return 63 - __builtin_clzll(n);
}

inline int binPow(int x, int deg, int mod) {
    int ans = 1;
    for (int i = sizeof(deg) * CHAR_BIT - 1; i >= 0; i--) {
        ans *= ans;
        ans %= mod;
        if (getbit(deg, i)) ans *= x;
        ans %= mod;
    }
    return ans;
}

/** Interface */

inline int readInt();
inline int readUInt();
inline void readWord(char *s);
inline int fast_readchar();  // you may use readchar() instead of it

inline void writeInt(int x);
inline void fast_writechar(int x);  // you may use putchar() instead of it
inline void writeWord(const char *s);
inline void fast_flush();

// ====================== END ======================
const int MAXN = 5e5 + 10;
const int MOD = 1e9 + 7;
const int INF = 1e18;

int tree[MAXN * 4];

int get(int v, int tl, int tr, int l, int r) {
    if (r <= tl || tr <= l) return 0;
    if (l <= tl && tr <= r) return tree[v];
    int tm = (tl + tr) / 2;
    return get(v * 2, tl, tm, l, r) + get(v * 2 + 1, tm, tr, l, r);
}

void update(int v, int tl, int tr, int pos, int mod) {
    if (pos < tl || tr <= pos) return;
    tree[v] += mod;
    if (tl + 1 == tr) return;
    int tm = (tl + tr) / 2;
    update(v * 2, tl, tm, pos, mod);
    update(v * 2 + 1, tm, tr, pos, mod);
}

void solve() {
    int n;
    cin >> n;
    auto arr = readvector<string>(n);
    cout << "AC x " << count(arr.begin(), arr.end(), "AC") << "\n"
         << "WA x " << count(arr.begin(), arr.end(), "WA") << "\n"
         << "TLE x " << count(arr.begin(), arr.end(), "TLE") << "\n"
         << "RE x " << count(arr.begin(), arr.end(), "RE") << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // t = readInt();
    // cin >> t;
    for (int i = 1; i <= t; ++i) {
        // cout << "Case #" << i << ": ";
        solve();
    }
    // fast_flush();
    return 0;
}

/** Read */

static const int buf_size = 4096;

inline int fast_readchar() {
    static char buf[buf_size];
    static int len = 0, pos = 0;
    if (pos == len) pos = 0, len = fread(buf, 1, buf_size, stdin);
    if (pos == len) return -1;
    return buf[pos++];
}

inline int readUInt() {
    int c = fast_readchar(), x = 0;
    while (c <= 32) c = fast_readchar();
    while ('0' <= c && c <= '9') x = x * 10 + c - '0', c = fast_readchar();
    return x;
}

inline int readInt() {
    int s = 1, c = fast_readchar();
    int x = 0;
    while (c <= 32) c = fast_readchar();
    if (c == '-') s = -1, c = fast_readchar();
    while ('0' <= c && c <= '9') x = x * 10 + c - '0', c = fast_readchar();
    return x * s;
}

inline void readWord(char *s) {
    int c = fast_readchar();
    while (c <= 32) c = fast_readchar();
    while (c > 32) *s++ = c, c = fast_readchar();
    *s = 0;
}

/** Write */

static int write_pos = 0;
static char write_buf[buf_size];

inline void fast_writechar(int x) {
    if (write_pos == buf_size) fwrite(write_buf, 1, buf_size, stdout), write_pos = 0;
    write_buf[write_pos++] = x;
}

inline void fast_flush() {
    if (write_pos) fwrite(write_buf, 1, write_pos, stdout), write_pos = 0;
}

inline void writeInt(int x) {
    if (x < 0) fast_writechar('-'), x = -x;

    char s[24];
    int n = 0;
    while (x || !n) s[n++] = '0' + x % 10, x /= 10;
    while (n--) fast_writechar(s[n]);
}

inline void writeWord(const char *s) {
    while (*s) fast_writechar(*s++);
}