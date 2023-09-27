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
using VB = vector<bool>;
using VC = vector<char>;
using VD = vector<double>;
using VI = vector<int>;
using VLL = vector<ll>;
using VS = vector<string>;
using VSH = vector<short>;

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



struct Card{char suit; int num;};

void merge(vector<Card> &A, int lt, int mid, int rt){//[lt, mid[, [mid, rt[
    int nl = mid - lt;
    int nr = rt - mid;
    vector<Card> L(nl+1), R(nr+1);
    REP(i, nl) L[i] = A[lt + i];
    REP(i, nr) R[i] = A[mid + i];
    L[nl].num = R[nr].num = 2 * INF;
    int i = 0, j = 0;
    FOR(k, lt, rt){
        if(L[i].num <= R[j].num) A[k] = L[i++];
        else A[k] = R[j++];
    }
}

void mergeSort(vector<Card> &A, int lt, int rt){
    if(lt+1 < rt){
        int mid = (lt + rt) / 2;
        mergeSort(A, lt, mid);
        mergeSort(A, mid, rt);
        merge(A, lt, mid, rt);
    }
}

int partition(vector<Card> &A, int p, int r){//[p, r]
    Card x = A[r]; //基準
    int i = p - 1;
    FOR(j, p, r){
        if(A[j].num <= x.num){
            swap(A[++i], A[j]);
        }
    }
    swap(A[++i], A[r]);
    return i;
}

void quickSort(vector<Card> &A, int p, int r){//[p, r]
    if(p < r){
        int q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}

bool isStable(vector<Card> &a, vector<Card> &b){
    //a.bはソート済み。aは安定、bを調べる。個数は同じ
    REP(i, a.size()){
        if(a[i].suit != b[i].suit) return false;
    }
    return true;
}


int main(){
    int n; cin >> n;
    vector<Card> A(n), B(n);
    REP(i, n){
        cin >> A[i].suit >> A[i].num;
        B[i] = A[i];
    }
    mergeSort(A, 0, n);
    quickSort(B, 0, n-1);
    cout << (isStable(A, B) ? "Stable" : "Not stable") << "\n";
    REP(i, n) cout << B[i].suit << " " << B[i].num << "\n";
    return 0;
}
