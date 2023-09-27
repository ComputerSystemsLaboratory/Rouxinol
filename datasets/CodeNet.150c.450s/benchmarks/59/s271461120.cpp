/**
 Insertion Sort 
 <Prints out intermediate sequence>
 
 Shunji Lin
 5/12/2015
 **/

#include <iostream>
#include <vector>

using namespace std;

void print_sequence(const vector<int> &sequence, int n) {
  for (int i = 0; i < n - 1; i++) {
    cout << sequence[i] << " ";
  }
  cout << sequence[n-1] << endl;
}

int main() {
  int n;
  cin >> n;
  vector<int> sequence(n);
    
  for (int i = 0; i < n; i++) {
    int entry;
    cin >> entry;
    sequence[i] = entry;
  }

  for (int i = 1; i < n; i++) {
    
    print_sequence(sequence, n);
        
    int key = sequence[i];
    int j = i - 1;
    while (j >= 0 && sequence[j] > key) {
      sequence[j+1] = sequence[j];
      j--;
    }
    sequence[j+1] = key;
  }
  print_sequence(sequence, n);
}
    
    
  