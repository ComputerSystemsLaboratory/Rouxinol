#include <bits/stdc++.h>
using namespace std;
#define all(n) begin(n), end(n)
const long long INF = numeric_limits<long long>::max();
typedef long long ll;
typedef vector<int> vint;
typedef vector<vector<int>> vvint;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef unsigned long long ull;
template <class T>
bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b)
{
    if (b < a)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <typename T>
vector<T> make_v(size_t a) { return vector<T>(a); }

template <typename T, typename... Ts>
auto make_v(size_t a, Ts... ts)
{
    return vector<decltype(make_v<T>(ts...))>(a, make_v<T>(ts...));
}
template <typename T, typename V>
typename enable_if<is_class<T>::value == 0>::type
fill_v(T &t, const V &v) { t = v; }

template <typename T, typename V>
typename enable_if<is_class<T>::value != 0>::type
fill_v(T &t, const V &v)
{
    for (auto &e : t)
        fill_v(e, v);
}

const int MAX_ROW = 510; // to be set appropriately
const int MAX_COL = 60;  // to be set appropriately
struct BitMatrix
{
    int H, W;
    bitset<MAX_COL> val[MAX_ROW];
    BitMatrix(int m = 1, int n = 1) : H(m), W(n) {}
    inline bitset<MAX_COL> &operator[](int i) { return val[i]; }
};

ostream &operator<<(ostream &s, BitMatrix A)
{
    s << endl;
    for (int i = 0; i < A.H; ++i)
    {
        for (int j = 0; j < A.W; ++j)
        {
            s << A[i][j] << ", ";
        }
        s << endl;
    }
    return s;
}

inline BitMatrix operator*(BitMatrix A, BitMatrix B)
{
    BitMatrix R(A.H, B.W);
    BitMatrix tB(B.W, B.H);
    for (int i = 0; i < tB.H; ++i)
        for (int j = 0; j < tB.W; ++j)
            tB[i][j] = B[j][i];
    for (int i = 0; i < R.H; ++i)
        for (int j = 0; j < R.W; ++j)
            R[i][j] = ((A[i] & tB[j]).count() & 1);
    return R;
}

inline BitMatrix pow(BitMatrix A, long long n)
{
    BitMatrix R(A.H, A.H);
    for (int i = 0; i < A.H; ++i)
        R[i][i] = 1;
    while (n > 0)
    {
        if (n & 1)
            R = R * A;
        A = A * A;
        n >>= 1;
    }
    return R;
}

int GaussJordan(BitMatrix &A, bool is_extended = false)
{
    int rank = 0;
    for (int col = 0; col < A.W; ++col)
    {
        if (is_extended && col == A.W - 1)
            break;
        int pivot = -1;
        for (int row = rank; row < A.H; ++row)
        {
            if (A[row][col])
            {
                pivot = row;
                break;
            }
        }
        if (pivot == -1)
            continue;
        swap(A[pivot], A[rank]);
        for (int row = 0; row < A.H; ++row)
        {
            if (row != rank && A[row][col])
                A[row] ^= A[rank];
        }
        ++rank;
    }
    return rank;
}

int linear_equation(BitMatrix A, vector<int> b, vector<int> &res)
{
    int m = A.H, n = A.W;
    BitMatrix M(m, n + 1);
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
            M[i][j] = A[i][j];
        M[i][n] = b[i];
    }
    int rank = GaussJordan(M, true);

    // check if it has no solution
    for (int row = rank; row < m; ++row)
        if (M[row][n])
            return -1;

    // answer
    res.assign(n, 0);
    for (int i = 0; i < rank; ++i)
        res[i] = M[i][n];
    return rank;
}

const int MOD = 998244353;
long long modpow(long long a, long long n, long long mod)
{
    long long res = 1;
    while (n > 0)
    {
        if (n & 1)
            res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

void solve(int N, vector<bitset<60>> A, string S)
{
    bool flag = true;
    BitMatrix M(N, 60);
    for (int i = N - 1; i >= 0; i--)
    {
        if (S[i] == '0')
        {
            M.val[i] = A[i];
        }
        else
        {
            auto M1 = M,M2 = M;
            int r1 = GaussJordan(M1);
            
            M2.val[i] = A[i];
            int r2 = GaussJordan(M2);
            if (r1 < r2)
            {
                flag = false;
                break;
            }
        }
    }
    if(!flag)
    {
        cout<<"1\n";
    }
    else
    {
        cout<<"0\n";
    }
    
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        int N;
        cin >> N;
        vector<bitset<60>> A(N);
        ll a;
        for (size_t i = 0; i < N; i++)
        {
            cin >> a;
            A[i]=a;
        }
        cin >> S;
        solve(N, A, S);
    }
    return 0;
}