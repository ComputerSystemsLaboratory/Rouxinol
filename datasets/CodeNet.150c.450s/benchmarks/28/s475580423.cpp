#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
using ll = unsigned long long;

int A[100000] = {0};
int n, k;

bool check(ll limit)
{
  int truck = 1;
  ll carried = 0;
  for(int i =0; i<n;++i) {
    if (A[i] > limit) return false;
    if(carried + A[i] <= limit) carried += A[i];   
    else {
      if (truck == k) return false;
      ++truck;
      carried = A[i];
    }
  }
  return true;
}

int main()
{
  // problem: pick k-1 breakpoints from among n objects
  // to minimize the maximum value of the objects contained
  // within a particular group of the objects
  // algorithm:
  // opt(k, n) = min_{i_k} max(opt(k-1, i_k), sum_{j=i_k, ..., n-1} A_j)
  // -> Binary search over 0..sum(A), see if there's a way to do it with that

  ll l=0, u=100000000000ULL;  // not my idea; comes from the #1 solution

  cin >> n >> k;
  
  for(int i = 0; i<n; ++i) cin >> A[i];

 // int it=0;

  while(u!=l) {
//    ++it; if (it>100) {cout << "Fail: " << u << " " << l; return 1; }
//    cout << u << " " << l << endl;
    ll m = (u+l)/2;
    if (!check(m)) l = m+1;
    else u = m;
  }

  cout << u << endl;
}
