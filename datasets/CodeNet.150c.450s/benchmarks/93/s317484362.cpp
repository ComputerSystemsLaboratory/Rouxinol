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

typedef pair<char, int> P;
static const int NMAX = 100000;
static const int SENTINEL = 2000000000;
P A[NMAX], B[NMAX], L[NMAX / 2 + 2], R[NMAX / 2 + 2];
int n;

void merge(P a[], int left, int mid, int right) {
  int n1 = mid - left, n2 = right - mid;
  rep(i,0,n1)
  {
    L[i] = a[i + left];
  }
  rep(j,0,n2)
  {
    R[j] = a[j + mid];
  }
  L[n1] = R[n2] = make_pair('\0', SENTINEL);
  int i = 0, j = 0;
  rep(k,left,right)
  {
    if (L[i].second <= R[j].second) {
      a[k] = L[i++];
    } else {
      a[k] = R[j++];
    }
  }
}

void mergeSort(P a[], int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(a, left, mid);
    mergeSort(a, mid, right);
    merge(a, left, mid, right);
  }

}

int partition(P a[], int p, int r) {
  int i = p - 1;
  int x = a[r].second;
  rep(j,p,r)
  {
    if (a[j].second <= x) {
      i++;
      swap(a[i], a[j]);
    }
  }
  swap(a[i + 1], a[r]);
  return i + 1;
}

void quicksort(P a[], int p, int r) {
  if (p < r) {
    int q = partition(a, p, r);
    quicksort(a, p, q - 1);
    quicksort(a, q + 1, r);
  }
}

void print() {
  rep(i,0,n)
  {
    printf("%c %d : %c %d\n", A[i].first, A[i].second, B[i].first, B[i].second);
  }
}

bool check(P a[], P b[], int n) {
  rep(i,0,n)
  {
    if (a[i].first != b[i].first) {
      return false;
    }
  }
  return true;
}

int main() {
  scanf("%d", &n);
  char c[1];
  rep(i,0,n)
  {
    scanf("%s %d", c, &A[i].second);
    A[i].first = c[0];
    B[i] = A[i];
  }
  quicksort(A, 0, n - 1);
  mergeSort(B, 0, n);
  string stability;
  stability = check(A, B, n) ? "Stable" : "Not stable";
  printf("%s\n", stability.c_str());
  rep(i,0,n)
  {
    printf("%c %d\n", A[i].first, A[i].second);
  }
  return 0;
}

