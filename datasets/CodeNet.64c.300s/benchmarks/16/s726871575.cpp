#include <iostream>
#define MAX 1000000001

using namespace std;

int main() {
  
  int n;
  cin >> n; // number of entries

  int first, second;
  cin >> first >> second;

  int min = (first < second)? first:second;
  int max_diff = second - first;

  for (int i = 2; i < n; ++i) {
    int input;
    cin >> input;
    if ((input - min) > max_diff) max_diff = (input - min);
    if (input < min) min = input;
  }

  cout << max_diff << endl;
}

    
      