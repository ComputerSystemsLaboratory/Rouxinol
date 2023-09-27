#include <iostream>
#include <string>
#include <vector>

#define ALPHABET_NUM ('z'-'a'+1)
using namespace std;

int main(int argc, char* argv[]) {
  vector<int> num(ALPHABET_NUM, 0);

  char c;
  while (cin >> c) {
    if (!('A' <= c && c <= 'Z') &&
	!('a' <= c && c <= 'z')) continue;
    if ('A' <= c && c <= 'Z') c += 'a' - 'A';
    num[c-'a']++;
  }
  
  for (int i = 0; i < num.size(); i++) {
    cout << (char)('a'+i) << " : " << num[i] << endl;
  }

  return 0;
}