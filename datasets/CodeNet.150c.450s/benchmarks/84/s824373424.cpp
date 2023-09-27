#define _USE_MATH_DEFINES
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <clocale>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

using namespace std;

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define FOR(i, s, n) for(int i = (s), i##_len=(n); i < i##_len; ++i)
#define FORS(i, s, n) for(int i = (s), i##_len=(n); i <= i##_len; ++i)
#define VFOR(i, s, n) for(int i = (s); i < (n); ++i)
#define VFORS(i, s, n) for(int i = (s); i <= (n); ++i)
#define REP(i, n) FOR(i, 0, n)
#define REPS(i, n) FORS(i, 0, n)
#define VREP(i, n) VFOR(i, 0, n)
#define VREPS(i, n) VFORS(i, 0, n)
#define RFOR(i, s, n) for(int i = (s), i##_len=(n); i >= i##_len; --i)
#define RFORS(i, s, n) for(int i = (s), i##_len=(n); i > i##_len; --i)
#define RREP(i, n) RFOR(i, n, 0)
#define RREPS(i, n) RFORS(i, n, 0)
#define ALL(v) (v).begin(), (v).end()
#define SORT(v) sort(ALL(v))
#define RSORT(v) sort(ALL(v), greater<decltype(v[0])>())
#define SZ(x) ((int)(x).size())
#define PB push_back
#define MP make_pair
#define MT make_tuple
#define BIT(n) (1LL<<(n))
#define UNIQUE(v) v.erase(unique(ALL(v)), v.end())
#define GRAYCODE(i) ((i) ^ ((i) >> 1))

using ll = long long;
using Pi_i = pair<int, int>;
using VI = vector<int>;
using VD = vector<double>;
using VLL = vector<ll>;
using VS = vector<string>;
using VC = vector<char>;
using VB = vector<bool>;

const int MOD = 1000000007;
const int INF = 1000000000;

template<class T>
bool chmax(T &a, const T &b){
    if(a < b){
        a = b; return true;
    }
    return false;
}
template<class T>
bool chmin(T &a, const T &b){
    if(b < a){
        a = b; return true;
    }
    return false;
}



ll merge(VI &A, int lt, int mid, int rt){//[lt, mid[, [mid, rt[
    int nl = mid - lt;
    int nr = rt - mid;
    ll cnt = 0;
    VI L(nl+1), R(nr+1);
    REP(i, nl) L[i] = A[lt + i];
    REP(i, nr) R[i] = A[mid + i];
    L[nl] = R[nr] = 2 * INF;
    int i = 0, j = 0;
    FOR(k, lt, rt){
        if(L[i] <= R[j]) A[k] = L[i++];
        else{
            A[k] = R[j++];
            cnt += nl - i; //A[k]が割り込んだ数
        }
    }
    return cnt;
}

ll mergeSort(VI &A, int lt, int rt){
    if(lt+1 < rt){
        int mid = (lt + rt) / 2;
        ll v1 = mergeSort(A, lt, mid);
        ll v2 = mergeSort(A, mid, rt);
        ll v3 = merge(A, lt, mid, rt);
        return v1 + v2 + v3;
    }
    else return 0;
}
int main(){
    int n; cin >> n;
    VI S(n);
    REP(i, n) cin >> S[i];
    ll ans = mergeSort(S, 0, n);
    cout << ans << "\n";
    return 0;
}
