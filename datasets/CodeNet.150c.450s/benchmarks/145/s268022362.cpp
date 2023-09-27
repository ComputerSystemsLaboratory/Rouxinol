#include<iostream>
#include<map>
#include<string>

using namespace std;

int main() {
  map<string, int> M;
  string word, fword, lword = "";
  int s = 0;
  while(cin >> word) {
    M[word]++;
    if(M[word] > s) {
      s = M[word];
      fword = word;
    }
    if(word.size() > lword.size()) lword = word;
  }
  cout << fword << " " << lword << endl;
  return 0;
}
    