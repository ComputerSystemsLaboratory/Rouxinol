#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<string, int> table;

int main() {
  string word, frequent, longest;
  size_t N = 0; // size_t represents size in bytes of word (length)
  while (cin >> word) {
    table[word] += 1;
    if (table[word] > N) {
      N = table[word];
      frequent = word;
    }
    if (word.size() > longest.size()) longest = word;
  }
  cout << frequent << " " << longest << endl;
}