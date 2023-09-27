#include <iostream>
#include <vector>
using namespace std;

int main() {
  bool table[2000] = {false};
  vector<int> suf;
  int N, ndata, size = 0;
  cin >> ndata;

  int data;
  for(int i = 0; i < ndata; i++) {
    cin >> data;
    int count = 0;
    for(int j = 0; j < size; j++) {
      if(!table[suf[j]+data]) {
	table[suf[j]+data] = true;
	suf.push_back(suf[j]+data);
	count++;
      }
    }
    size += count;
    table[data] = true;
    suf.push_back(data);
    size++;
  }

  cin >> N;
  for(int i = 0; i < N; i++) {
    cin >> data;
    if(table[data])
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }

  return 0;
}