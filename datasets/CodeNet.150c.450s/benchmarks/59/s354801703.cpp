#define dbg(...) fprintf(stderr,__VA_ARGS__)
#define dpr(x) cerr<<#x<<": "<<x<<endl;
#define dprc(c) do{cerr<<#c<<":";for(auto&_i:(c)){cerr<<" "<<_i;}cerr<<endl;}while(0)
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
int INF = 1e9+7;
#define all(c) begin(c), end(c)
#define tr(i,c) for(auto i=begin(c);i!=end(c);i++)
#define rtr(i,c) for(auto i=(c).rbegin();i!=(c).rend();i++)
#define rep(i,b) for(auto i=0;i<(b);i++)
#define pb push_back
#define sz(c) int((c).size())

void dump(vi& A) {
  string sp = "";
  for (auto& x:A) {
    cout << sp << x;
    sp = " ";
  }
  cout << endl;
}

void insertionSort(vi& A, int N) {
  for (int i = 1; i < N; i++) {
    int v = A[i];
    int j = i - 1;
    while (j >= 0 && A[j] > v) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = v;
    dump(A);
  }
}

int main(int argc, char **argv)
{
  vi A;
  int n;
  cin >> n;
  A = vi(n);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }
  dump(A);
  insertionSort(A, n);
  return 0;
}