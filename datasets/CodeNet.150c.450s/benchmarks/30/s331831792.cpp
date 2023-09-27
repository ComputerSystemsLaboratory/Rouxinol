#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

void display(vector<int> ary) {
  for (int i = 0; i < ary.size(); i++) {
    if (i > 0) cout << " ";
    cout << ary[i];
  }

  cout << endl;
}

void selection_sort_and_display(vector<int> ary) {
  int min_idx, len, count = 0;
  len = ary.size();
  for (int i = 0; i < len; i++) {
    min_idx = i;
    for (int j = i; j < len; j++) {
      if (ary[min_idx] > ary[j]) {
        min_idx = j;
      }
    }

    if (min_idx != i) {
      swap(ary[i], ary[min_idx]);
      count++;
    }
  }

  display(ary);
  cout << count << endl;
}

int main(void) {
  int len;
  vector<int> ary;
  char s[200];

  cin >> len;

  for (int i = 0; i < len; i++) {
    cin >> s;
    ary.push_back(atoi(s));
  }

  selection_sort_and_display(ary);

  return 0;
}