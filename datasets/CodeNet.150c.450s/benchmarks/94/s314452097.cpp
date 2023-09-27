#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n; // number of entries
  cin >> n;

  vector<int> swap_vec;

  for (int i = 0; i < n; i++) {
    int entry;
    cin >> entry;
    swap_vec.push_back(entry);
  }
  
  //bubble sort
  int n_swaps = 0;
  for (int i = 0; i < n; i++) {
    for (int j = n-1; j > i; j--) {
      if (swap_vec[j] < swap_vec[j-1]) {
	swap(swap_vec[j], swap_vec[j-1]);
	++n_swaps;
      }
    }
  }
  
  //print vector
  for (int i = 0; i < n; i++) {
    cout << swap_vec[i];
    if (i < n - 1) cout << " ";
  }
  cout << endl;

  cout << n_swaps << endl;
}
	