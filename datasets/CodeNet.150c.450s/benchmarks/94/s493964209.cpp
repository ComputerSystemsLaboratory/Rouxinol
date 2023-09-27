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

static int swap_count;

void bubbleSort(vi& A, int N) {
  bool flag = true;
  while (flag) {
    flag = false;
    for (int j = N-1; j > 0; j--) {
      if (A[j] < A[j-1]) {
        swap(A[j], A[j-1]);
        flag = true;
        swap_count++;
      }
    }
  }
}

int main(int argc, char **argv)
{
  int N;
  cin >> N;
  vi A(N);
  for (auto& a:A) {
    cin >> a;
  }
  bubbleSort(A, N);
  string sp = "";
  for (auto& a:A) {
    cout << sp << a;
    sp = " ";
  }
  cout << endl;
  cout << swap_count << endl;

  return 0;
}