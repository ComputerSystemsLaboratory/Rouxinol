#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n; // number of entries
  cin >> n;

  vector<int> sort_vec;

  for (int i = 0; i < n; i++) {
    int entry;
    cin >> entry;
    sort_vec.push_back(entry);
  }
  
  //bubble sort
  int n_swaps = 0; //number of swaps
  for (int i = 0; i < n; i++) {
    int min_index = i; // assume min is first element
    for (int j = i+1; j < n; j++) {
      // test for minimum 
      if (sort_vec[j] < sort_vec[min_index]) min_index = j;
    }
    if (i != min_index) {
      swap(sort_vec[i], sort_vec[min_index]); //swap 
      n_swaps++;
    }
  } 
  
  //print vector
  for (int i = 0; i < n; i++) {
    cout << sort_vec[i];
    if (i < n - 1) cout << " ";
  }
  cout << endl;

  cout << n_swaps << endl;
}
	