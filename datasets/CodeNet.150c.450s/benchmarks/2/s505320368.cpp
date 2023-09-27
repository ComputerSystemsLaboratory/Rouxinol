#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> ns;

int partition(int p, int r)
{
  auto x = ns[r];
  int i = p-1;
  for (int j=p; j<r; ++j) {
    if (ns[j] <= x) {
      ++i;
      swap(ns[i], ns[j]);
    }
  }
  swap(ns[i+1], ns[r]);
  return i+1;
}

int main()
{
  int n; cin >> n; // number of iterations
  ns = vector<int> {istream_iterator<int>{cin}, istream_iterator<int>{}};
  int split = partition(0, n-1);
  for(int i=0; i<n; ++i) {
    if(i) cout << ' ';
    if(i==split) cout << '[';
    cout << ns[i];
    if(i==split) cout << ']';
  }
  cout << endl;
}
