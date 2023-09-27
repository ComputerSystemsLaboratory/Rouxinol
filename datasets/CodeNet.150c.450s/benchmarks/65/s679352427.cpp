#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct card {
  char suit;
  char value;
};

void print_vec(vector<card> &vec, int n) {
  for (int i = 0; i < n; i++) {
    cout << vec[i].suit << vec[i].value;
    if (i < n - 1) cout << " ";
  }
  cout << endl;
}

int main() {
  int n; //number of entries;
  cin >> n;

  vector<card> sort_vec1;

  for (int i = 0; i < n; i++) {
    string entry;
    cin >> entry;
    card new_card = {entry[0], entry[1]};
    sort_vec1.push_back(new_card);
  }

  vector<card> sort_vec2 = sort_vec1; //make copy

  //bubble sort
  for (int i = 0; i < n; i++) {
    for (int j = n-1; j > i; j--) {
      if (sort_vec1[j].value < sort_vec1[j-1].value) {
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
    int min_value = sort_vec2[i].value; // value at minimum
    int repeated_index = n; // track min index of repeated value
    for (int j = i+1; j < n; j++) {
      // test for minimum
      if (sort_vec2[j].value == min_value) { // if same value card found
	if (repeated_index == n) repeated_index = j; //set min repeated index
      }					      
      if (sort_vec2[j].value < sort_vec2[min_index].value) min_index = j;
    }
    if (i != min_index) {
      // if same value cards inverted, unstable
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