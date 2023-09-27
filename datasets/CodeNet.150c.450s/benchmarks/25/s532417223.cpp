#include <iostream>
#include <map>
#include <cctype>

using namespace std;

int main(void) {
  char line[1200];
  map<char, int> mp;
  int t;
  for(char c = 'a'; c <= 'z'; c++)
    mp[c] = 0;
  while(cin.getline(line, sizeof(line))) {
    for(int i = 0; line[i] != '\0'; i++)
      line[i] = tolower(line[i]);
    for(int i = 0; line[i] != '\0'; i++)
      if(mp.find(line[i]) != mp.end())
        mp[line[i]] += 1;
  }
  for(map<char, int>::iterator itr = mp.begin(); itr != mp.end(); ++itr)
    cout << itr->first << " : " << itr->second << endl;
  return 0;
}