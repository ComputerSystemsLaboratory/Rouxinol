#include <iostream>
#include <cstdio>
#include <map>
#include <string>
using namespace std;

int main(void){
  map<string, bool> dict;
  int n;
  char com[13], str[10];
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    scanf("%s %s", com, str);
    if (com[0] == 'i') {
      dict[string(str)] = true;
    } else {
      if (dict[string(str)]) printf("yes\n");
      else printf("no\n");
    }
  }
  
  return 0;
}