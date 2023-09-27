#include <iostream>
using namespace std;

const int infty = 1000000007;

typedef long long ll;

ll merge(int* left, int* mid, int* right) {
  int n1 = mid - left;
  int n2 = right - mid;
  int* L;
  L = new int[n1+1];
  int* R;
  R = new int[n2+1];
  for (auto i = 0; i < n1; i++) {
    L[i] = *(left+i);
  }
  L[n1] = infty;
  for (auto i = 0; i < n2; i++) {
    R[i] = *(mid+i);
  }
  R[n2] = infty;
  int* pl = L;
  int* pr = R;
  for (int* pk = left; pk < right; pk++) {
    if (*pl <= *pr) {
      *pk = *pl;
      pl++;
    } else {
      *pk = *pr;
      pr++;
    }
  }
  delete [] L;
  delete [] R;
  return (ll)(right-left);
}

ll merge_sort(int* left, int* right) {
  ll ans = 0;
  if (left+1 < right) {
    int* mid = left+(right-left)/2;
    ans += merge_sort(left, mid);
    ans += merge_sort(mid, right);
    ans += merge(left, mid, right);
  }
  return ans;
}

int S[500010];

int main() {
  int n;
  cin >> n;
  for (auto i = 0; i < n; i++) {
    cin >> S[i];
  }
  int ans = merge_sort(S, S+n);
  for (auto i = 0; i < n; i++) {
    cout << S[i];
    if (i == n-1) {
      cout << endl;
    } else {
      cout << " ";
    }
  }
  cout << ans << endl;
}