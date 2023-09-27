#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <utility>

using namespace std;

void chomp(string *str) {
  if ((*str)[str->size() - 1] == '\n') { str->erase(str->end() - 1); }
}

int main() {
  string word;
  typedef pair<string, int> WordFrequency;
  unordered_map<string, int> word_frequencies;
  while (cin >> word) { ++word_frequencies[word]; }

  auto most_frequent_word = accumulate(
      word_frequencies.begin(),
      word_frequencies.end(),
      WordFrequency(),
      [&](const WordFrequency& a, const WordFrequency& b){
        return a.second > b.second ? a : b;
      }).first;
  auto longuest_word = accumulate(
      word_frequencies.begin(),
      word_frequencies.end(),
      WordFrequency(),
      [&](const WordFrequency& a, const WordFrequency& b){
        return a.first.size() > b.first.size() ? a : b;
      }).first;

  cout << most_frequent_word << ' ' << longuest_word << endl;

  return 0;
}