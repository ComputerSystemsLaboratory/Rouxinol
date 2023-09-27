#define MYDEBUG
//
#include <bits/stdc++.h>
#ifdef MYDEBUG
#define dbp(x) cout<<#x<<": "<<x<<endl
#define dbp2(x,y) cout<<#x<<","<<#y<<": "<<x<<","<<y<<endl
#define dbp3(x,y,z) cout<<#x<<","<<#y<<","<<#z<<": "<<x<<","<<y<<","<<z<<endl
#define dbp4(w,x,y,z) cout<<#w<<","<<#x<<","<<#y<<","<<#z<<": "<<w<<","<<x<<","<<y<<","<<z<<endl
#define ifcin(x) std::ifstream cin(x)
#else
#define dbp(x)
#define dbp2(x,y)
#define dbp3(x,y,z)
#define dbp4(w,x,y,z)
#define ifcin(x)
#endif
#define ll long long
#define all(x) x.begin(), x.end()
#define rep(i, from, to) for(int i=from; i<to; ++i)
#define REP(i, from, to) for(int i=from; i<=to; ++i)
using namespace std;
template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
  out << "[";
  size_t last = v.size() - 1;
  for (size_t i = 0; i < v.size(); ++i) {
    out << v[i];
    if (i != last) {
      out << ",";
    }
  }
  out << "]";
  return out;
}
template<typename T>
ostream& operator<<(ostream& out, const vector<vector<T> >& v) {
  for (size_t i = 0; i < v.size(); ++i) {
    out << v[i] << endl;
  }
  return out;
}
template<typename T1, typename T2>
ostream& operator<<(ostream& out, const pair<T1, T2>& p) {
  out << "{" << p.first << "," << p.second << "}";
  return out;
}

static const int NMAX = 2000000;
static const int VMAX = 10000;
int n, A[NMAX], B[NMAX], C[VMAX];

void countingSort(int a[], int b[], int n, int k) {
  REP(i,0,k)
  {
    C[i] = 0;
  }
  rep(i,0,n)
  {
    C[A[i]]++;
  }
  REP(i,1,k)
  {
    C[i] += C[i - 1];
  }
  for (int i = n - 1; i >= 0; --i) {
    b[C[a[i]]-- - 1] = a[i];
  }
}

int main() {
  scanf("%d", &n);
  int mx = 0;
  rep(i,0,n)
  {
    scanf("%d", &A[i]);
    mx = max(mx, A[i]);
  }
  countingSort(A, B, n, mx);
  rep(i,0,n)
  {
    if (i > 0) {
      printf(" ");
    }
    printf("%d", B[i]);
  }
  printf("\n");
  return 0;
}

