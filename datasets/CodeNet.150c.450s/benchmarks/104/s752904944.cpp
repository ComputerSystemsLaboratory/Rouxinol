#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
  int w, n;
  cin >> w >> n;
  vector<int> amd(w);

  for (unsigned int i = 0; i < amd.size(); ++i)
    amd[i] = i+1;

  for (int i = 0; i < n; ++i) {
    string line;
    cin >> line;
    int a = atoi(line.substr(0, line.find_first_of(",", 0)).c_str());
    int b = atoi(line.substr(line.find_first_of(",", 0)+1).c_str());
    swap(amd[a-1], amd[b-1]);
  }
  for (unsigned int i = 0; i < amd.size(); ++i)
    cout << amd[i] << endl;

  return 0;
}