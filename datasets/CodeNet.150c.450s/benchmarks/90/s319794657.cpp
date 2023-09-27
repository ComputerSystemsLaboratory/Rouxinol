#include <iostream>

using namespace std;

int freq[100];

int main () {
  int n;
  int index_mode = 0;

  while(cin >> n)
    freq[n-1]++;

  for(int i = 0; i < 100; i++){
    if (freq[i] > freq[index_mode])
      index_mode = i;
  }

  for(int i = 0; i < 100; i++){
    if (freq[i] == freq[index_mode])
      cout << i+1 << endl;
  }
}