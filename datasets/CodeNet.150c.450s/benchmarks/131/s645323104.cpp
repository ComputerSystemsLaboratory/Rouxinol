#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  int t, L;
  while(cin >> t >> L, t || L) {
    string a = to_string(t);

    int pos[1000000];
    for (int i = 0; i < 1000000; i++) pos[i] = -1;

    int index = 0;
    while (pos[stoi(a)] == -1) {
      pos[stoi(a)] = index++;
      for(int i = a.size(); i < L; i++) a.push_back('0');
      sort(a.begin(), a.end());
      int mini = stoi(a);
      sort(a.begin(), a.end(), greater<int>());
      int maxi = stoi(a);
      int diff = maxi - mini;
      a = to_string(diff);
    }
    cout << pos[stoi(a)] << " " << a << " " << index - pos[stoi(a)] << endl;
  }
  return 0;
}