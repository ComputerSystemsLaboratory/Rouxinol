#include <algorithm>
#include <iostream>
#include <limits.h>
#include <math.h>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1
#define pb push_back

using namespace std;

int main() {
  int n;
  string train, tmp1_1, tmp1_2, tmp2_1, tmp2_2;
  cin >> n;
  while (n--) {
    set<string> trains;
    cin >> train;
    for (int i = 1; i < train.length(); i++) {
      tmp1_1 = train.substr(0, i);
      tmp1_2 = tmp1_1;
      reverse(tmp1_2.begin(), tmp1_2.end());
      tmp2_1 = train.substr(i, train.length()-i);
      tmp2_2 = tmp2_1;
      reverse(tmp2_2.begin(), tmp2_2.end());
      trains.insert(tmp1_1+tmp2_1);
      trains.insert(tmp1_1+tmp2_2);
      trains.insert(tmp1_2+tmp2_1);
      trains.insert(tmp1_2+tmp2_2);
      trains.insert(tmp2_1+tmp1_1);
      trains.insert(tmp2_1+tmp1_2);
      trains.insert(tmp2_2+tmp1_1);
      trains.insert(tmp2_2+tmp1_2);
    }
    cout << trains.size() << el;
  }

}