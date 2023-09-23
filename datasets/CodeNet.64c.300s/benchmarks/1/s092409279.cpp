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
void solve() {

}

static const int NMAX = 100000;
int A[NMAX], n;

int partition(int a[], int p, int r) {
  int x = a[r];
  //[p, i] <= x
  //[i+1, j] > x
  int i = p - 1;
  for (int j = p; j < r; ++j) {
    if (a[j] <= x) {
      i++;
      swap(a[i], a[j]);
    }
  }
  //a[i] <= a[r] < a[i+1]
  //a[i]はx=a[r]以下のグループの末尾
  //a[i+1]はx=a[r]より大きいグループの先頭
  swap(a[i + 1], a[r]);
  return i + 1;
}

int main() {
  scanf("%d", &n);
  rep(i,0,n)
  {
    scanf("%d", &A[i]);
  }
  int pivot = partition(A, 0, n - 1);
  rep(i,0,n)
  {
    if (i > 0) {
      printf(" ");
    }
    if (i == pivot) {
      printf("[%d]", A[i]);
    } else {
      printf("%d", A[i]);
    }
  }
  printf("\n");
  return 0;
}

