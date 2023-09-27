#include <iostream>
#include <string>
#include <map>
#include <sstream>

using namespace std;

int main() {

  string buf;
  
  string str;

  map<string,int> word;
  string max_frequent_str;
  string max_letters_str;
  int max_frequent;
  int max_letters;

  
  max_letters=0;

  while(cin >> str) {
    
    if(str.length()>max_letters) max_letters=str.length();

    word[str]++;

  }
  
  max_frequent=0;

  for(map<string,int>::iterator it=word.begin();it!=word.end();it++) {

    if(max_frequent<(*it).second) {

      max_frequent=(*it).second;
      max_frequent_str=(*it).first;

    }

    if((*it).first.length()==max_letters) max_letters_str=(*it).first;

  }

  cout << max_frequent_str << " " << max_letters_str << endl;

  return 0;

}

 