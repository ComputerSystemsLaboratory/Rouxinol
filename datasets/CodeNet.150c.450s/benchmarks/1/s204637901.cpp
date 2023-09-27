#include <iostream>
#include <set>
#include <vector>
#include <utility>

using namespace std;

#define FOR(i,n) for(int i=0; i<n; i++)
#define FOR2(i, z, n) for(int i=z; i<n; i++)

int find_index(vector<int> &subsequence, int length, int start, int value) {
  while(length - start > 1) {
    int medium = start + (length - start) / 2;
    if (subsequence[medium] >= value)
      length = medium;
    else
      start = medium;
  }
  return length;
}

int main() {
  int nbr;
  cin >> nbr;
  vector<int> sequence(nbr);
  vector<int> subsequence(nbr, 0);
  int length = 1;

  FOR(i, nbr) {
    int val;
    cin >> val;
    sequence[i] = val;
  }

  subsequence[0] = sequence[0];

  for (int i = 1; i < sequence.size(); i++) {
    if (sequence[i] < subsequence[0])
      subsequence[0] = sequence[i];
    else if (sequence[i] > subsequence[length - 1])
      subsequence[length++] = sequence[i];
    else {
      subsequence[find_index(subsequence, length - 1, -1, sequence[i])] = sequence[i];
    }
  }

  cout << length << endl;
}
