#include<iostream>
#include<iterator>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
struct Card {
  int rank;
  char suit;
  int orig_idx;
};

vector<Card> ns;
map<int,vector<int>> idxs;

int partition(int p, int r)
{
  auto x = ns[r];
  int i = p-1;
  for (int j=p; j<r; ++j) {
    if (ns[j].rank <= x.rank) {
      ++i;
      swap(ns[i], ns[j]);
    }
  }
  swap(ns[i+1], ns[r]);
  return i+1;
}

void sort(int p, int r) {
  if(p<r) {
    int q = partition(p, r);
    sort(p, q-1);
    sort(q+1, r);
  }
}

int main()
{
  int n; cin >> n;
  for(int i=0; i<n;++i) {
    Card c;
    cin >> c.suit;
    cin >> c.rank;
    c.orig_idx = i;
    ns.push_back(c);
  }
  sort(0, n-1);
  bool stable=true;
  for(int i=0; i<n; ++i) {
//    cout << "Test: " << ns[i].suit << ' ' << ns[i].rank << ", orig idx: " << ns[i].orig_idx << endl;
    if (!idxs.count(ns[i].rank)) {
      idxs[ns[i].rank]=vector<int>{ns[i].orig_idx};
    } else {
      if(ns[i].orig_idx < idxs[ns[i].rank].back()) {
        stable=false; 
        break;
      }
    }
  }
  if(stable) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  for(int i=0; i<n; ++i) {
    cout << ns[i].suit << ' ' << ns[i].rank << endl;
  }
}
