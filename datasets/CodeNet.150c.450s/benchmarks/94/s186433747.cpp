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

void bubble_sort_and_display(vector<int> ary) {
  int count = 0;
  bool flag = true;

  while (flag) {
    flag = false;
    for (int i = ary.size() - 1; i > 0; i--) {
      if (ary[i] < ary[i - 1]) {
        swap(ary[i], ary[i - 1]);
        flag = true;
        count++;
      }
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

  bubble_sort_and_display(ary);

  return 0;
}