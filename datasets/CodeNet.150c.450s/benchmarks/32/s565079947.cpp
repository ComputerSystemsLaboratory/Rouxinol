#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
  int m, min, max;

  while(cin >> m >> min >> max, m) {
    vector<int> v;
    for (int i = 0; i < m; i++) {
      int P;
      cin >> P;
      v.push_back(P);
    }

    int maxgap = 0, answer = 0;
    for (int i = min; i < max+1; i++) {
      int gap = v[i-1] - v[i];
      //cout << gap << endl;
      if(maxgap<=gap) {
	maxgap = gap;
	answer = i;
      }
    }

    cout << answer << endl;

  }
  
  return 0;
}
