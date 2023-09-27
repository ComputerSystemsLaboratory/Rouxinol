#include <unordered_set>
#include <cstdio>
#include <string>
 
int main() {
  std::unordered_set< std::string > dict;
  int n; // number of entries
 
  scanf("%d", &n);
  
  for (int i = 0; i < n; ++i) {
    char cmd[7] = {0}; //command
    char word[13] = {0}; //word to store
    scanf("%s %s", cmd, word);
 
    if (cmd[0] == 'i') { // if insert
      dict.insert(word);
    } else {
      std::unordered_set < std::string >::const_iterator got = dict.find(word);
      if (got == dict.end()) { // if word not found
	printf("no\n");
      } else { // if word found
	printf("yes\n");
      }
    }
  }

}