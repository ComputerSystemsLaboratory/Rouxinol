#include <iostream>
#include <string>
#include <map>
using namespace std;
map<string,int> table;

int main() {
  string word,freq,longest;
  size_t N=0;
  while (cin >> word) {
    table[word] += 1;
    if (table[word]>N) {
      N = table[word];
      freq = word;
    }
    if (word.size()>longest.size())
      longest = word;
  }
  cout << freq << " " << longest << endl;
}