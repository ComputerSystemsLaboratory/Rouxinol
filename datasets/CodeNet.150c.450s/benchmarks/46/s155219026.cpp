#include <iostream>
using namespace std;

int main () {
  int upper_limit_of_terms = 1,wanted_sum = 1;
  while (1) {
    int number_of_wanted_sum = 0;
    cin >> upper_limit_of_terms >> wanted_sum;
	if (upper_limit_of_terms == 0 && wanted_sum == 0) return 0;
	for (int i = upper_limit_of_terms;i>=3;--i) {
	  for (int j = upper_limit_of_terms-1;j>=2;--j) {
	    if (j > i) continue;
	    for (int k = upper_limit_of_terms-2;k>=1;--k) {
		  if (i == j || j == k || k == i || k > j) continue;
		  if (i+j+k == wanted_sum) ++number_of_wanted_sum;
		}
	  }
	}
	cout << number_of_wanted_sum << endl;
  }
  return 0;
}