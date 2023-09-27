#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
using namespace std;

ll max_sub_sum(vector<ll> accumulations, int range) {
  ll max_tmp = accumulations[range];

  for(int i = 1; i + range - 1 < accumulations.size(); i++) {
    max_tmp = max(max_tmp, accumulations[i + range - 1] - accumulations[i - 1]);
  }

  return max_tmp;
}

int main() {
  int sequence_num;
  int range;
  vector<ll> accumulations;

  while(true) {
    cin >> sequence_num >> range;

    if(sequence_num == 0 && range == 0) {
      break;
    }
    accumulations.resize(sequence_num + 1);

    accumulations[0] = 0;

    for(int i = 1; i <= sequence_num; i++) {
      int current;
      cin >> current;
      accumulations[i] = accumulations[i - 1] + current;
    }

    cout << max_sub_sum(accumulations, range) << endl;
  }
}
