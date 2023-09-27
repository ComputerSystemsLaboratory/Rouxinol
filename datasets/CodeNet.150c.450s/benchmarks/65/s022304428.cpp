

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void print_vec(vector<string> &vec, int n) {
  for (int i = 0; i < n; i++) {
    cout << vec[i];
    if (i < n - 1) cout << " ";
  }
  cout << endl;
}

int main() {
  int n; //number of entries;
  cin >> n;

  vector<string> sort_vec1;

  for (int i = 0; i < n; i++) {
    string entry;
    cin >> entry;
    sort_vec1.push_back(entry);
  }

  vector<string> sort_vec2 = sort_vec1; //make copy

  //bubble sort
  for (int i = 0; i < n; i++) {
    for (int j = n-1; j > i; j--) {
      if (stoi(sort_vec1[j].substr(1)) < stoi(sort_vec1[j-1].substr(1))) {
	swap(sort_vec1[j], sort_vec1[j-1]);
      }
    }
  }

  print_vec(sort_vec1, n);
  
  cout << "Stable" << endl; // bubble sort always stable

  //selection sort
  bool unstable = false;
  for (int i = 0; i < n; i++) {
    int min_index = i; // assume min is first element
    int min_value = stoi(sort_vec2[i].substr(1)); // value at minimum
    int repeated_index = n; // track min index of repeated value
    for (int j = i+1; j < n; j++) {
      // test for minimum
      if (stoi(sort_vec2[j].substr(1)) == min_value) {
	if (repeated_index == n) repeated_index = j; //set min index
      }					      
      if (stoi(sort_vec2[j].substr(1)) < stoi(sort_vec2[min_index].substr(1))) min_index = j;
    }
    if (i != min_index) {
      if (min_index > repeated_index) unstable = true;
      swap(sort_vec2[i], sort_vec2[min_index]); //swap 
    }
  }

  print_vec(sort_vec2, n);
  
  if (unstable) {
    cout << "Not stable" << endl;
  } else {
    cout << "Stable" << endl;
  }
  
}