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
const int NIL = -1;

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


class maxBinaryHeap{
    VI A;
public:
    maxBinaryHeap(int n){
        A.resize(n + 1);
    }
    void setValue(int i, int v){
        A[i] = v;
    }

    int getValue(int i){
        return A[i];
    }

    bool haveParent(int i){
        return i / 2 >= 1;
    }

    int parent(int i){
        return A[i / 2];
    }

    bool haveLeft(int i){
        return 2 * i < SZ(A);
    }

    int left(int i){
        return A[2 * i];
    }

    bool haveRight(int i){
        return 2 * i + 1 < SZ(A);
    }

    int right(int i){
        return A[2 * i + 1];
    }

private:
    void maxHeapify(int i){
        int lt = 2 * i;
        int rt = 2 * i + 1;
        int largest;
        if(haveLeft(i) && A[lt] > A[i])
            largest = lt;
        else largest = i;
        if(haveRight(i) && A[rt] > A[largest])
            largest = rt;

        if(largest != i){
            swap(A[i], A[largest]);
            maxHeapify(largest);
        }
    }

public:
    void buildMaxHeap(){
        RREPS(i, (A.size()-1)/2)
            maxHeapify(i);
    }
};

int main(){
    int H; cin >> H;
    maxBinaryHeap T(H);
    FORS(i, 1, H){
        int a; cin >> a;
        T.setValue(i, a);
    }
    T.buildMaxHeap();
    FORS(i, 1, H){
        cout << " " << T.getValue(i);
    }
    cout << "\n";
    return 0;
}

