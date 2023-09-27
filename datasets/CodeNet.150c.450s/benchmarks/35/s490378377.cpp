#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n;
  while (scanf("%d", &n) != EOF) {
    if (n == 0)
      break;

    vector<int> seq(n);
    for (int i = 0; i < n; ++i)
      scanf("%d", &seq[i]);

    for (int i = 1; i < seq.size(); ++i) {
      if (seq[i-1] > 0)
	seq[i] += seq[i-1];
    }

    cout << *max_element(seq.begin(), seq.end()) << endl;
  }
  return 0;
}