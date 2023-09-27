#include <iostream>

using namespace std;

string* bubble_sort(int n, string* array) {
  for (int i = 0; i < n; i++) {
    for (int j = n-1; j > i; j--) {
      if (array[j][1] < array[j-1][1]) {
        string tmp = array[j];
        array[j] = array[j-1];
        array[j-1] = tmp;
      }
    }
  }
  return array;
}

string* selection_sort (int n, string* array) {
  for (int i = 0; i < n; i++) {
    int mini = i;
    for (int j = i+1; j < n; j++) {
      if (array[j][1] < array[mini][1]) {
        mini = j;
      }
    }
    string tmp = array[i];
    array[i] = array[mini];
    array[mini] = tmp;
  }
  return array;
}

void print_array(int n, string* array) {
  cout << array[0];
  for (int i = 1; i < n; i++) {
    cout << " " << array[i];
  }
  cout << endl;
}

int main() {
  int n;
  string* a;
  string* b;

  cin >> n;
  a = new string[n];
  b = new string[n];
  
  for (int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    
    a[i] = tmp;
    b[i] = tmp;
  }

  bubble_sort(n, a);
  print_array(n, a);
  cout << "Stable" << endl;
  
  selection_sort(n, b);
  print_array(n, b);
  bool stable = true;
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      stable = false;
      break;
    }
  }

  if (stable) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }
  return 0;
}