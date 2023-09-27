#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <complex>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef long long LL;
#define ALL(a)  (a).begin(),(a).end()
#define REP(i,n) for(int i=0;i<(n);++i)
const double EPS = 1e-10;
const double PI  = acos(-1.0);
#define dump(x) cerr << "  (L" << __LINE__ << ") " << #x << " = " << (x) << endl;
#define dumpv(x) cerr << "  (L" << __LINE__ << ") " << #x << " = "; REP(q,(x).size()) cerr << (x)[q] << " "; cerr << endl;
template<typename T1, typename T2>
ostream& operator<<(ostream& s, const pair<T1, T2>& d) {return s << "(" << d.first << "," << d.second << ")";}


double cross(complex<double>& a, complex<double>& b) {
  return a.real() * b.imag() - a.imag() * b.real();
}

int main() {
  int T; cin >> T;
  REP(t, T) {
    vector<double> in(8);
    REP(i, 8) cin >> in[i];
    
    complex<double> a(in[2]-in[0], in[3]-in[1]);
    complex<double> b(in[6]-in[4], in[7]-in[5]);
    double exter_product = cross(a, b);
    if (abs(exter_product) < EPS) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}