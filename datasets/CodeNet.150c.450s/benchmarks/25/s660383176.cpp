#include <iostream>
#include <vector>
#include <string.h>
#include <map>

using namespace std;

int main(){

  map< char, int> ans;
  string str;
  
  while( cin >> str){
    for( int i = 0; i < str.size(); ++i){
      ++ans[str[i]];
    }
  }

  char a;
  map<char,int>::iterator itr1,itr2;
  for( int i = 0; i < 26; ++i){
    itr1 = ans.find('a'+i);
    itr2 = ans.find('A'+i);
    a = 'a' + i;
    cout << a << " : " <<  itr1->second + itr2->second << endl;
  }
  return 0;
}