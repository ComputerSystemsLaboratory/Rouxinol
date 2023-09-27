//include
//------------------------------------------
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

//------------------------------------------
inline int toInt(string s) {
    int v;
    istringstream sin(s);
    sin >> v;
    return v;
}

template<class T>
inline string toString(T x) {
    ostringstream sout;
    sout << x;
    return sout.str();
}

//------------------------------------------
template<class T>
inline T sqr(T x) { return x * x; }

//typedef
//------------------------------------------
typedef pair<int, int> PII;
typedef long long LL;
typedef vector<int> VI;
typedef vector<bool> VB;
typedef vector<VI> VVI;
typedef vector<VB> VVB;
typedef vector<string> VS;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;

//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i, c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s, e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())

//repetition
//------------------------------------------
#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define REP(i, n)  FOR(i,0,n)
#define REPR(i, n) for(int i = n;i >= 0;i--)

//constant
//--------------------------------------------
const double EPS = 1e-10;
const double PI = acos(-1.0);
const int INF = 1 << 30;

//partial_permutation nPr
//first・・最初の数
//middle・・r(取り出す数)
//last・・n(全体数)
template<class BidirectionalIterator>
bool next_partial_permutation(BidirectionalIterator first, BidirectionalIterator middle, BidirectionalIterator last) {
    reverse(middle, last);
    return next_permutation(first, last);
}

//combination nCr
//first1・・最初の数
//last1==first2・・r(取り出す数)
//last2・・n(全体数)
template<class BidirectionalIterator>
bool next_combination(BidirectionalIterator first1, BidirectionalIterator last1, BidirectionalIterator first2,
                      BidirectionalIterator last2) {
    if ((first1 == last1) || (first2 == last2)) {
        return false;
    }
    BidirectionalIterator m1 = last1;
    BidirectionalIterator m2 = last2;
    --m2;
    while (--m1 != first1 && !(*m1 < *m2)) {
    }
    bool result = (m1 == first1) && !(*first1 < *m2);
    if (!result) {
        while (first2 != m2 && !(*m1 < *first2)) {
            ++first2;
        }
        first1 = m1;
        std::iter_swap(first1, first2);
        ++first1;
        ++first2;
    }
    if ((first1 != last1) && (first2 != last2)) {
        m1 = last1;
        m2 = first2;
        while ((m1 != first1) && (m2 != last2)) {
            std::iter_swap(--m1, m2);
            ++m2;
        }
        std::reverse(first1, m1);
        std::reverse(first1, last1);
        std::reverse(m2, last2);
        std::reverse(first2, last2);
    }
    return !result;
}

//clear memory
#define CLR(a, b) memset((a), (b),sizeof(a))

//debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;



int main() {

    int q;
    cin >> q;

    REP(i, q){
        string X;
        string Y;
        cin >> X;
        cin >> Y;

        VVI dp;
        dp.resize(X.size()+1);
        REP(i, X.size()+1){
            dp[i].resize(Y.size()+1);
        }

        for(int i = 1; i<=X.size();i++){
            for(int j=1;j<=Y.size();j++){
                if(X[i-1]==Y[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        cout<<dp[X.size()][Y.size()] << endl;

    }


    return 0;
}





























































