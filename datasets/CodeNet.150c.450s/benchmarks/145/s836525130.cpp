#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char *argv[]) {
  map<string, int> words;
  string tmp, line;

  getline(cin, line);
  stringstream ss(line);
  while (ss >> tmp)
    if (words.count(tmp) == 0)
      words.insert(pair<string, int>(tmp, 1));
    else
      words[tmp]++;

  map<string, int>::iterator itr = words.begin();
  string longest = (*itr).first;
  map<string, int>::iterator freq = itr;
  while (itr != words.end()) {
    if (longest.size() < (*itr).first.size())
      longest = (*itr).first;
    if ((*freq).second < (*itr).second)
      freq = itr;
    itr++;
  }

  cout << (*freq).first << ' ' << longest << endl;
  return 0;
}